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

void MainWindow::setStandartAffine()
{
    ui->moveByX->setValue(0);
    ui->moveByY->setValue(0);
    ui->moveByZ->setValue(0);
    ui->scaleSlider->setValue(50);
    ui->rotateByX->setValue(0);
    ui->rotateByY->setValue(0);
    ui->rotateByZ->setValue(0);
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
    setStandartAffine();
}

void MainWindow::on_closeObject_clicked()
{
    ui->OGLWindow->closeObject();
    ui->veticesCount->setText("");
    ui->edgesCount->setText("");
    ui->objName->setText("");
    setStandartAffine();
}

void MainWindow::on_projectionType_currentIndexChanged(int index)
{
    if (index) {
        ui->OGLWindow->projection_type = CENTRAL;
    } else {
        ui->OGLWindow->projection_type = PARALLEL;
    }
     ui->OGLWindow->update();
}

void MainWindow::on_scaleSlider_valueChanged(int value)
{
    double scaleValu = value / ui->OGLWindow->scale_val;
    scale(&ui->OGLWindow->data, scaleValu);
    ui->OGLWindow->scale_val = value;
    ui->OGLWindow->update();
}

void MainWindow::on_moveByX_valueChanged(int value)
{
    double moveXValue = (value - ui->OGLWindow->translate_x) * ui->OGLWindow->normalize_coef/100;
    move_X(&ui->OGLWindow->data, moveXValue);
    ui->OGLWindow->translate_x = value;
    ui->OGLWindow->update();
}


void MainWindow::on_moveByY_valueChanged(int value)
{
    double moveYValue = (value - ui->OGLWindow->translate_y) * ui->OGLWindow->normalize_coef/100;
    move_Y(&ui->OGLWindow->data, moveYValue);
    ui->OGLWindow->translate_y = value;
    ui->OGLWindow->update();
}


void MainWindow::on_moveByZ_valueChanged(int value)
{
    double moveZValue = (value - ui->OGLWindow->translate_z) * ui->OGLWindow->normalize_coef/100;
    move_Z(&ui->OGLWindow->data, moveZValue);
    ui->OGLWindow->translate_z = value;
    ui->OGLWindow->update();
}


void MainWindow::on_rotateByX_valueChanged(int value)
{
    double rotateXValue = value - ui->OGLWindow->rotate_x;
    rotate_X(&ui->OGLWindow->data, rotateXValue);
    ui->OGLWindow->rotate_x = value;
    ui->OGLWindow->update();
}


void MainWindow::on_rotateByY_valueChanged(int value)
{
    double rotateYValue = value - ui->OGLWindow->rotate_y;
    rotate_Y(&ui->OGLWindow->data, rotateYValue);
    ui->OGLWindow->rotate_y = value;
    ui->OGLWindow->update();
}


void MainWindow::on_rotateByZ_valueChanged(int value)
{
    double rotateZValue = value - ui->OGLWindow->rotate_z;
    rotate_X(&ui->OGLWindow->data, rotateZValue);
    ui->OGLWindow->rotate_z = value;
    ui->OGLWindow->update();
}

