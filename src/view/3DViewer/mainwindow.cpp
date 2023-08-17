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
    if (fileName[0] !='\0') {
    ui->OGLWindow->parse_file(fileName);
    }
}

void MainWindow::on_closeObject_clicked()
{
    ui->OGLWindow->closeObject();
}

