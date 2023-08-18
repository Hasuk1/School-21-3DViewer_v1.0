#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  setWindowTitle("3D Viewer");
    setFixedSize(width(), height());
}

MainWindow::~MainWindow() {
  memory_free(&ui->OGLWindow->data);
  delete ui;
}


void MainWindow::on_openObjFile_clicked()
{
    QString rootPath = QDir::rootPath();
        QString QString_filename = QFileDialog::getOpenFileName(
            this, tr("Open .obj file:"), rootPath, tr("Obj Files (*.obj)"));
        ui->pathToObjFile->setText(QString_filename);
}

void MainWindow::on_renderObjFile_clicked()
{
    QString fileNameStr = ui->pathToObjFile->text();
    QByteArray fileNameUtf8 = fileNameStr.toUtf8();
    char *fileName = fileNameUtf8.data();
    if (QFile::exists(fileName)) {
    ui->OGLWindow->parse_file(fileName);
    QString vCount = QString::number(ui->OGLWindow->data.vertices_v_count);
    unsigned int ffCount = ui->OGLWindow->data.polygonals_f_count/2;
    QString fCount = QString::number(ffCount);
    ui->veticesCount->setText(vCount);
    ui->edgesCount->setText(fCount);
        char *start = strrchr(fileName, '/') + 1;
        char *ext = strrchr(fileName, '.');
        *ext = '\0';
        ui->objName->setText(start);
    } else {
        QMessageBox::information(this, "ERROR", "Enter a path to file correctly");
        ui->veticesCount->setText("");
        ui->edgesCount->setText("");
        ui->objName->setText("");
    }

}

void MainWindow::on_closeObject_clicked()
{
    ui->OGLWindow->closeObject();
}
