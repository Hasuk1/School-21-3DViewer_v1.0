#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  setWindowTitle("3D Viewer");
  setFixedSize(width(), height());
  settings = new QSettings("setting3DViewer.conf", "settings", this);
  loadSettings();

  connect(ui->edgesRed, SIGNAL(clicked()), this, SLOT(edgesChangeColor()));
  connect(ui->edgesOrange, SIGNAL(clicked()), this, SLOT(edgesChangeColor()));
  connect(ui->edgesYellow, SIGNAL(clicked()), this, SLOT(edgesChangeColor()));
  connect(ui->edgesGreen, SIGNAL(clicked()), this, SLOT(edgesChangeColor()));
  connect(ui->edgesBlue, SIGNAL(clicked()), this, SLOT(edgesChangeColor()));
  connect(ui->edgesPurple, SIGNAL(clicked()), this, SLOT(edgesChangeColor()));
  connect(ui->edgesWhite, SIGNAL(clicked()), this, SLOT(edgesChangeColor()));

  connect(ui->verticesRed, SIGNAL(clicked()), this,
          SLOT(verticesChangeColor()));
  connect(ui->verticesOrange, SIGNAL(clicked()), this,
          SLOT(verticesChangeColor()));
  connect(ui->verticesYellow, SIGNAL(clicked()), this,
          SLOT(verticesChangeColor()));
  connect(ui->verticesGreen, SIGNAL(clicked()), this,
          SLOT(verticesChangeColor()));
  connect(ui->verticesBlue, SIGNAL(clicked()), this,
          SLOT(verticesChangeColor()));
  connect(ui->verticesPurple, SIGNAL(clicked()), this,
          SLOT(verticesChangeColor()));
  connect(ui->verticesWhite, SIGNAL(clicked()), this,
          SLOT(verticesChangeColor()));

  connect(ui->backgroundWhite, SIGNAL(clicked()), this,
          SLOT(backgroundChangeColor()));
  connect(ui->backgroundBlack, SIGNAL(clicked()), this,
          SLOT(backgroundChangeColor()));
  connect(ui->backgroundBlue, SIGNAL(clicked()), this,
          SLOT(backgroundChangeColor()));
  connect(ui->backgroundGray1, SIGNAL(clicked()), this,
          SLOT(backgroundChangeColor()));
  connect(ui->backgroundGray2, SIGNAL(clicked()), this,
          SLOT(backgroundChangeColor()));
  connect(ui->backgroundGreen, SIGNAL(clicked()), this,
          SLOT(backgroundChangeColor()));
  connect(ui->backgroundPink, SIGNAL(clicked()), this,
          SLOT(backgroundChangeColor()));
}

MainWindow::~MainWindow() {
  saveSettings();
  memory_free(&ui->OGLWindow->data);
  delete settings;
  delete ui;
}

void MainWindow::saveSettings() {
  settings->setValue("settings", 1);
  settings->setValue("projection_type", ui->OGLWindow->projection_type);
  settings->setValue("l_r", ui->OGLWindow->l_r);
  settings->setValue("l_g", ui->OGLWindow->l_g);
  settings->setValue("l_b", ui->OGLWindow->l_b);
  settings->setValue("l_thickness", ui->OGLWindow->l_thickness);
  settings->setValue("l_type", ui->OGLWindow->l_type);
  settings->setValue("v_r", ui->OGLWindow->v_r);
  settings->setValue("v_g", ui->OGLWindow->v_g);
  settings->setValue("v_b", ui->OGLWindow->v_b);
  settings->setValue("v_size", ui->OGLWindow->v_size);
  settings->setValue("v_type", ui->OGLWindow->v_type);
  settings->setValue("bg_r", ui->OGLWindow->bg_r);
  settings->setValue("bg_g", ui->OGLWindow->bg_g);
  settings->setValue("bg_b", ui->OGLWindow->bg_b);
}

void MainWindow::loadSettings() {
  if (settings->value("settings").toInt()) {
    char rgbColor[40];
    ui->projectionType->setCurrentIndex(
        settings->value("projection_type").toInt());
    ui->OGLWindow->l_r = settings->value("l_r").toDouble();
    ui->OGLWindow->l_g = settings->value("l_g").toDouble();
    ui->OGLWindow->l_b = settings->value("l_b").toDouble();
    sprintf(rgbColor, "background-color: rgb(%d,%d,%d)",
            (int)(ui->OGLWindow->l_r * 255), (int)(ui->OGLWindow->l_g * 255),
            (int)(ui->OGLWindow->l_b * 255));
    ui->edgesThickness->setValue(settings->value("l_thickness").toInt());

    ui->edgesType->setCurrentIndex(settings->value("l_type").toInt());
    ui->OGLWindow->v_r = settings->value("v_r").toDouble();
    ui->OGLWindow->v_g = settings->value("v_g").toDouble();
    ui->OGLWindow->v_b = settings->value("v_b").toDouble();
    sprintf(rgbColor, "background-color: rgb(%d,%d,%d)",
            (int)(ui->OGLWindow->v_r * 255), (int)(ui->OGLWindow->v_g * 255),
            (int)(ui->OGLWindow->v_b * 255));
    ui->verticesThickness->setValue(settings->value("v_size").toInt());
    ui->verticesType->setCurrentIndex(settings->value("v_type").toInt());

    ui->OGLWindow->bg_r = settings->value("bg_r").toDouble();
    ui->OGLWindow->bg_g = settings->value("bg_g").toDouble();
    ui->OGLWindow->bg_b = settings->value("bg_b").toDouble();
    sprintf(rgbColor, "background-color: rgb(%d,%d,%d)",
            (int)(ui->OGLWindow->bg_r * 255), (int)(ui->OGLWindow->bg_g * 255),
            (int)(ui->OGLWindow->bg_b * 255));
  }
}

void MainWindow::on_openObjFile_clicked() {
  QString rootPath = QDir::rootPath();
  QString QString_filename = QFileDialog::getOpenFileName(
      this, tr("Open .obj file:"), rootPath, tr("Obj Files (*.obj)"));
  ui->pathToObjFile->setText(QString_filename);
}

void MainWindow::setStandartAffine() {
  ui->moveByX->setValue(0);
  ui->moveByY->setValue(0);
  ui->moveByZ->setValue(0);
  ui->scaleSlider->setValue(50);
  ui->rotateByX->setValue(0);
  ui->rotateByY->setValue(0);
  ui->rotateByZ->setValue(0);
}

void MainWindow::on_renderObjFile_clicked() {
  QString fileNameStr = ui->pathToObjFile->text();
  QByteArray fileNameUtf8 = fileNameStr.toUtf8();
  char *fileName = fileNameUtf8.data();
  if (QFile::exists(fileName)) {
    ui->OGLWindow->parse_file(fileName);
    QString vCount = QString::number(ui->OGLWindow->data.vertices_v_count);
    unsigned int ffCount = ui->OGLWindow->data.polygonals_f_count / 2;
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

void MainWindow::on_closeObject_clicked() {
  ui->OGLWindow->closeObject();
  ui->veticesCount->setText("");
  ui->edgesCount->setText("");
  ui->objName->setText("");
  setStandartAffine();
}

void MainWindow::on_projectionType_currentIndexChanged(int index) {
  if (index) {
    ui->OGLWindow->projection_type = CENTRAL;
  } else {
    ui->OGLWindow->projection_type = PARALLEL;
  }
  ui->OGLWindow->update();
}

void MainWindow::on_scaleSlider_valueChanged(int value) {
  double scaleValu = value / ui->OGLWindow->scale_val;
  scale(&ui->OGLWindow->data, scaleValu);
  ui->OGLWindow->scale_val = value;
  ui->OGLWindow->update();
}

void MainWindow::on_moveByX_valueChanged(int value) {
  double moveXValue = (value - ui->OGLWindow->translate_x) *
                      ui->OGLWindow->normalize_coef / 100;
  move_X(&ui->OGLWindow->data, moveXValue);
  ui->OGLWindow->translate_x = value;
  ui->OGLWindow->update();
}

void MainWindow::on_moveByY_valueChanged(int value) {
  double moveYValue = (value - ui->OGLWindow->translate_y) *
                      ui->OGLWindow->normalize_coef / 100;
  move_Y(&ui->OGLWindow->data, moveYValue);
  ui->OGLWindow->translate_y = value;
  ui->OGLWindow->update();
}

void MainWindow::on_moveByZ_valueChanged(int value) {
  double moveZValue = (value - ui->OGLWindow->translate_z) *
                      ui->OGLWindow->normalize_coef / 100;
  move_Z(&ui->OGLWindow->data, moveZValue);
  ui->OGLWindow->translate_z = value;
  ui->OGLWindow->update();
}

void MainWindow::on_rotateByX_valueChanged(int value) {
  double rotateXValue = value - ui->OGLWindow->rotate_x;
  rotate_X(&ui->OGLWindow->data, rotateXValue);
  ui->OGLWindow->rotate_x = value;
  ui->OGLWindow->update();
}

void MainWindow::on_rotateByY_valueChanged(int value) {
  double rotateYValue = value - ui->OGLWindow->rotate_y;
  rotate_Y(&ui->OGLWindow->data, rotateYValue);
  ui->OGLWindow->rotate_y = value;
  ui->OGLWindow->update();
}

void MainWindow::on_rotateByZ_valueChanged(int value) {
  double rotateZValue = value - ui->OGLWindow->rotate_z;
  rotate_X(&ui->OGLWindow->data, rotateZValue);
  ui->OGLWindow->rotate_z = value;
  ui->OGLWindow->update();
}

void MainWindow::edgesStdClrBtn() {
  ui->edgesRed->setStyleSheet(
      "background-color: rgb(211, 54, 48);border-radius: 5px;color:rgb(211, "
      "54, 48)");
  ui->edgesOrange->setStyleSheet(
      "background-color:rgb(226, 148, 61);border-radius: 5px;color:rgb(226, "
      "148, 61)");
  ui->edgesYellow->setStyleSheet(
      "background-color: rgb(242, 216, 77);border-radius: 5px;color:rgb(242, "
      "216, 77)");
  ui->edgesGreen->setStyleSheet(
      "background-color: rgb(102, 195, 89);border-radius: 5px;color:rgb(102, "
      "195, 89)");
  ui->edgesBlue->setStyleSheet(
      "background-color:rgb(34, 83, 237);border-radius: 5px;color:rgb(34, 83, "
      "237)");
  ui->edgesPurple->setStyleSheet(
      "background-color: rgb(95, 15, 162);border-radius: 5px;color:rgb(95, 15, "
      "162)");
  ui->edgesWhite->setStyleSheet(
      "background-color: white;border-radius: 5px;color:white");
}

void MainWindow::setWhiteEdges() {
  ui->OGLWindow->l_r = QColor::fromRgb(255, 0, 0).redF();
  ui->OGLWindow->l_g = QColor::fromRgb(0, 255, 0).greenF();
  ui->OGLWindow->l_b = QColor::fromRgb(0, 0, 255).blueF();
  ui->edgesWhite->setStyleSheet(
      "background-color:rgb(255, 255, 255);border-radius: 5px;color:rgb(255, "
      "255, 255);border: 2px solid rgb(200, 249, 100);");
}

void MainWindow::edgesChangeColor() {
  QPushButton *button = static_cast<QPushButton *>(sender());
  edgesStdClrBtn();
  if (button->text() == "R") {
    ui->OGLWindow->l_r = QColor::fromRgb(211, 0, 0).redF();
    ui->OGLWindow->l_g = QColor::fromRgb(0, 54, 0).greenF();
    ui->OGLWindow->l_b = QColor::fromRgb(0, 0, 48).blueF();
    ui->edgesRed->setStyleSheet(
        "background-color: rgb(211, 54, 48);border-radius: 5px;color:rgb(211, "
        "54, 48);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "O") {
    ui->OGLWindow->l_r = QColor::fromRgb(226, 0, 0).redF();
    ui->OGLWindow->l_g = QColor::fromRgb(0, 148, 0).greenF();
    ui->OGLWindow->l_b = QColor::fromRgb(0, 0, 61).blueF();
    ui->edgesOrange->setStyleSheet(
        "background-color:rgb(226, 148, 61);border-radius: 5px;color:rgb(226, "
        "148, 61);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "Y") {
    ui->OGLWindow->l_r = QColor::fromRgb(242, 0, 0).redF();
    ui->OGLWindow->l_g = QColor::fromRgb(0, 216, 0).greenF();
    ui->OGLWindow->l_b = QColor::fromRgb(0, 0, 77).blueF();
    ui->edgesYellow->setStyleSheet(
        "background-color: rgb(242, 216, 77);border-radius: 5px;color:rgb(242, "
        "216, 77);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "G") {
    ui->OGLWindow->l_r = QColor::fromRgb(102, 0, 0).redF();
    ui->OGLWindow->l_g = QColor::fromRgb(0, 195, 0).greenF();
    ui->OGLWindow->l_b = QColor::fromRgb(0, 0, 89).blueF();
    ui->edgesGreen->setStyleSheet(
        "background-color: rgb(102, 195, 89);border-radius: 5px;color:rgb(102, "
        "195, 89);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "B") {
    ui->OGLWindow->l_r = QColor::fromRgb(34, 0, 0).redF();
    ui->OGLWindow->l_g = QColor::fromRgb(0, 83, 0).greenF();
    ui->OGLWindow->l_b = QColor::fromRgb(0, 0, 237).blueF();
    ui->edgesBlue->setStyleSheet(
        "background-color:rgb(34, 83, 237);border-radius: 5px;color:rgb(34, "
        "83, 237);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "P") {
    ui->OGLWindow->l_r = QColor::fromRgb(95, 0, 0).redF();
    ui->OGLWindow->l_g = QColor::fromRgb(0, 15, 0).greenF();
    ui->OGLWindow->l_b = QColor::fromRgb(0, 0, 162).blueF();
    ui->edgesPurple->setStyleSheet(
        "background-color: rgb(95, 15, 162);border-radius: 5px;color:rgb(95, "
        "15, 162);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "W") {
    setWhiteEdges();
  }
  ui->OGLWindow->update();
}

void MainWindow::on_edgesThickness_valueChanged(int value) {
  ui->OGLWindow->l_thickness = value;
  ui->OGLWindow->update();
}

void MainWindow::on_edgesType_currentIndexChanged(int index) {
  if (index) {
    ui->OGLWindow->l_type = DASHED;
  } else {
    ui->OGLWindow->l_type = SOLID;
  }
  ui->OGLWindow->update();
}

void MainWindow::on_edgesReset_clicked() {
  ui->edgesThickness->setValue(1);
  ui->edgesType->setCurrentIndex(0);
  edgesStdClrBtn();
  setWhiteEdges();
}

void MainWindow::verticesStdClrBtn() {
  ui->verticesRed->setStyleSheet(
      "background-color: rgb(211, 54, 48);border-radius: 5px;color:rgb(211, "
      "54, 48)");
  ui->verticesOrange->setStyleSheet(
      "background-color:rgb(226, 148, 61);border-radius: 5px;color:rgb(226, "
      "148, 61)");
  ui->verticesYellow->setStyleSheet(
      "background-color: rgb(242, 216, 77);border-radius: 5px;color:rgb(242, "
      "216, 77)");
  ui->verticesGreen->setStyleSheet(
      "background-color: rgb(102, 195, 89);border-radius: 5px;color:rgb(102, "
      "195, 89)");
  ui->verticesBlue->setStyleSheet(
      "background-color:rgb(34, 83, 237);border-radius: 5px;color:rgb(34, 83, "
      "237)");
  ui->verticesPurple->setStyleSheet(
      "background-color: rgb(95, 15, 162);border-radius: 5px;color:rgb(95, 15, "
      "162)");
  ui->verticesWhite->setStyleSheet(
      "background-color: white;border-radius: 5px;color:white");
}

void MainWindow::setWhiteVertices() {
  ui->OGLWindow->v_r = QColor::fromRgb(255, 0, 0).redF();
  ui->OGLWindow->v_g = QColor::fromRgb(0, 255, 0).greenF();
  ui->OGLWindow->v_b = QColor::fromRgb(0, 0, 255).blueF();
  ui->verticesWhite->setStyleSheet(
      "background-color:rgb(255, 255, 255);border-radius: 5px;color:rgb(255, "
      "255, 255);border: 2px solid rgb(200, 249, 100);");
}

void MainWindow::verticesChangeColor() {
  QPushButton *button = static_cast<QPushButton *>(sender());
  verticesStdClrBtn();
  if (button->text() == "R") {
    ui->OGLWindow->v_r = QColor::fromRgb(211, 0, 0).redF();
    ui->OGLWindow->v_g = QColor::fromRgb(0, 54, 0).greenF();
    ui->OGLWindow->v_b = QColor::fromRgb(0, 0, 48).blueF();
    ui->verticesRed->setStyleSheet(
        "background-color: rgb(211, 54, 48);border-radius: 5px;color:rgb(211, "
        "54, 48);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "O") {
    ui->OGLWindow->v_r = QColor::fromRgb(226, 0, 0).redF();
    ui->OGLWindow->v_g = QColor::fromRgb(0, 148, 0).greenF();
    ui->OGLWindow->v_b = QColor::fromRgb(0, 0, 61).blueF();
    ui->verticesOrange->setStyleSheet(
        "background-color:rgb(226, 148, 61);border-radius: 5px;color:rgb(226, "
        "148, 61);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "Y") {
    ui->OGLWindow->v_r = QColor::fromRgb(242, 0, 0).redF();
    ui->OGLWindow->v_g = QColor::fromRgb(0, 216, 0).greenF();
    ui->OGLWindow->v_b = QColor::fromRgb(0, 0, 77).blueF();
    ui->verticesYellow->setStyleSheet(
        "background-color: rgb(242, 216, 77);border-radius: 5px;color:rgb(242, "
        "216, 77);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "G") {
    ui->OGLWindow->v_r = QColor::fromRgb(102, 0, 0).redF();
    ui->OGLWindow->v_g = QColor::fromRgb(0, 195, 0).greenF();
    ui->OGLWindow->v_b = QColor::fromRgb(0, 0, 89).blueF();
    ui->verticesGreen->setStyleSheet(
        "background-color: rgb(102, 195, 89);border-radius: 5px;color:rgb(102, "
        "195, 89);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "B") {
    ui->OGLWindow->v_r = QColor::fromRgb(34, 0, 0).redF();
    ui->OGLWindow->v_g = QColor::fromRgb(0, 83, 0).greenF();
    ui->OGLWindow->v_b = QColor::fromRgb(0, 0, 237).blueF();
    ui->verticesPurple->setStyleSheet(
        "background-color:rgb(34, 83, 237);border-radius: 5px;color:rgb(34, "
        "83, 237);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "P") {
    ui->OGLWindow->v_r = QColor::fromRgb(95, 0, 0).redF();
    ui->OGLWindow->v_g = QColor::fromRgb(0, 15, 0).greenF();
    ui->OGLWindow->v_b = QColor::fromRgb(0, 0, 162).blueF();
    ui->edgesPurple->setStyleSheet(
        "background-color: rgb(95, 15, 162);border-radius: 5px;color:rgb(95, "
        "15, 162);border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "W") {
    setWhiteVertices();
  }
  ui->OGLWindow->update();
}

void MainWindow::on_verticesThickness_valueChanged(int value) {
  ui->OGLWindow->v_size = value;
  ui->OGLWindow->update();
}

void MainWindow::on_verticesType_currentIndexChanged(int index) {
  if (index == 0) {
    ui->OGLWindow->v_type = NONE;
  } else if (index == 1) {
    ui->OGLWindow->v_type = CIRCLE;
  } else if (index == 2)
    ui->OGLWindow->v_type = SQUARE;
  ui->OGLWindow->update();
}

void MainWindow::on_verticesReset_clicked() {
  ui->verticesThickness->setValue(1);
  ui->verticesType->setCurrentIndex(0);
  verticesStdClrBtn();
  setWhiteVertices();
  ui->OGLWindow->update();
}

void MainWindow::backgroundStdClrBtn() {
  ui->backgroundPink->setStyleSheet(
      "background-color:rgb(245, 215, 255);color: rgb(245, 215, "
      "255);border-radius: 5px;");
  ui->backgroundGreen->setStyleSheet(
      "background-color: rgb(190, 249, 81);color:rgb(190, 249, "
      "81);border-radius: 5px;");
  ui->backgroundBlue->setStyleSheet(
      "background-color:rgb(66, 66, 169);color: rgb(66, 66, "
      "169);border-radius: 5px;");
  ui->backgroundBlack->setStyleSheet(
      "background-color:rgb(0, 0, 0);color: rgb(0, 0, 0);border-radius: 5px;");
  ui->backgroundGray1->setStyleSheet(
      "background-color:rgb(27, 27, 27);color: rgb(27, 27, 27);border-radius: "
      "5px;");
  ui->backgroundGray2->setStyleSheet(
      "background-color:rgb(102, 102, 102);color: rgb(102, 102, "
      "102);border-radius: 5px;");
  ui->backgroundWhite->setStyleSheet(
      "background-color:rgb(255, 255, 255);color: rgb(255, 255, "
      "255);border-radius: 5px;");
}

void MainWindow::setBlackBackground() {
  ui->OGLWindow->bg_r = QColor::fromRgb(0, 0, 0).redF();
  ui->OGLWindow->bg_g = QColor::fromRgb(0, 0, 0).greenF();
  ui->OGLWindow->bg_b = QColor::fromRgb(0, 0, 0).blueF();
  ui->backgroundBlack->setStyleSheet(
      "background-color:rgb(0, 0, 0);color: rgb(0, 0, 0);border-radius: "
      "5px;border: 2px solid rgb(200, 249, 100);");
}

void MainWindow::backgroundChangeColor() {
  QPushButton *button = static_cast<QPushButton *>(sender());
  backgroundStdClrBtn();
  if (button->text() == "N") {
    ui->OGLWindow->bg_r = QColor::fromRgb(245, 0, 0).redF();
    ui->OGLWindow->bg_g = QColor::fromRgb(0, 215, 0).greenF();
    ui->OGLWindow->bg_b = QColor::fromRgb(0, 0, 255).blueF();
    ui->backgroundPink->setStyleSheet(
        "background-color:rgb(245, 215, 255);color: rgb(245, 215, "
        "255);border-radius: 5px;border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "G") {
    ui->OGLWindow->bg_r = QColor::fromRgb(190, 0, 0).redF();
    ui->OGLWindow->bg_g = QColor::fromRgb(0, 249, 0).greenF();
    ui->OGLWindow->bg_b = QColor::fromRgb(0, 0, 81).blueF();
    ui->backgroundGreen->setStyleSheet(
        "background-color: rgb(190, 249, 81);color:rgb(190, 249, "
        "81);border-radius: 5px;border: 2px solid rgb(255, 255, 255);");
  } else if (button->text() == "P") {
    ui->OGLWindow->bg_r = QColor::fromRgb(66, 0, 0).redF();
    ui->OGLWindow->bg_g = QColor::fromRgb(0, 66, 0).greenF();
    ui->OGLWindow->bg_b = QColor::fromRgb(0, 0, 169).blueF();
    ui->backgroundBlue->setStyleSheet(
        "background-color:rgb(66, 66, 169);color: rgb(66, 66, "
        "169);border-radius: 5px;border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "B") {
    setBlackBackground();
  } else if (button->text() == "K") {
    ui->OGLWindow->bg_r = QColor::fromRgb(27, 0, 0).redF();
    ui->OGLWindow->bg_g = QColor::fromRgb(0, 27, 0).greenF();
    ui->OGLWindow->bg_b = QColor::fromRgb(0, 0, 27).blueF();
    ui->backgroundGray1->setStyleSheet(
        "background-color:rgb(27, 27, 27);color: rgb(27, 27, "
        "27);border-radius: 5px;border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "R") {
    ui->OGLWindow->bg_r = QColor::fromRgb(102, 0, 0).redF();
    ui->OGLWindow->bg_g = QColor::fromRgb(0, 102, 0).greenF();
    ui->OGLWindow->bg_b = QColor::fromRgb(0, 0, 102).blueF();
    ui->backgroundGray2->setStyleSheet(
        "background-color:rgb(102, 102, 102);color: rgb(102, 102, "
        "102);border-radius: 5px;border: 2px solid rgb(200, 249, 100);");
  } else if (button->text() == "W") {
    ui->OGLWindow->bg_r = QColor::fromRgb(255, 0, 0).redF();
    ui->OGLWindow->bg_g = QColor::fromRgb(0, 255, 0).greenF();
    ui->OGLWindow->bg_b = QColor::fromRgb(0, 0, 255).blueF();
    ui->backgroundWhite->setStyleSheet(
        "background-color:rgb(255, 255, 255);color: rgb(255, 255, "
        "255);border-radius: 5px;border: 2px solid rgb(200, 249, 100);");
  }
  ui->OGLWindow->update();
}

void MainWindow::on_backgroundReset_clicked() {
  backgroundStdClrBtn();
  setBlackBackground();
  ui->OGLWindow->update();
}



void MainWindow::on_getScreanshot_clicked()
{
    QPixmap screenshot = ui->OGLWindow->grab();
    QString filePath = QFileDialog::getSaveFileName(this, "Save Screenshot", "", "Images (*.png *.jpg)");
    if (!filePath.isEmpty()) {
                screenshot.save(filePath);
            }
}
