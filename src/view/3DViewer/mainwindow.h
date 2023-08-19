#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <my_ogl_widget.h>

#include <QColorDialog>
#include <QDateTime>
#include <QDialog>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QSettings>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  Ui::MainWindow *ui;

  bool isObjFile;
  int vertices_count;
  int edges_count;

  enum display_method { NONE, CIRCLE, SQUARE };
  enum projection_type { PARALLEL, CENTRAL };
  enum edges_type { SOLID, DASHED };

  ~MainWindow();

 private slots:
  void on_openObjFile_clicked();
  void on_renderObjFile_clicked();
  void on_closeObject_clicked();
  void on_scaleSlider_valueChanged(int value);
  void on_projectionType_currentIndexChanged(int index);
  void on_moveByX_valueChanged(int value);
  void on_moveByY_valueChanged(int value);
  void on_moveByZ_valueChanged(int value);
  void on_rotateByX_valueChanged(int value);
  void on_rotateByY_valueChanged(int value);
  void on_rotateByZ_valueChanged(int value);
  void setStandartAffine();
  void saveSettings();
  void loadSettings();

  void edgesChangeColor();
  void setWhiteEdges();
  void edgesStdClrBtn();
  void on_edgesThickness_valueChanged(int value);
  void on_edgesType_currentIndexChanged(int index);
  void on_edgesReset_clicked();

  void verticesChangeColor();
  void setWhiteVertices();
  void verticesStdClrBtn();
  void on_verticesThickness_valueChanged(int value);
  void on_verticesType_currentIndexChanged(int index);
  void on_verticesReset_clicked();

  void backgroundChangeColor();
  void setBlackBackground();
  void backgroundStdClrBtn();

  void on_backgroundReset_clicked();

 private:
  void set_mainwindow_attributes();
  void bind_slots();
  void restore_default_values();

  QPoint cur_pos;
  QPoint new_pos;
  QSettings *settings;
  QString gif_name;
  QTimer *timer;
  int frames_counter = 0;
};
#endif  // MAINWINDOW_H
