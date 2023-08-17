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

  /* VARIABLES FOR OPENGL LOGIC */
  bool isObjFile;
  int vertices_count;
  int edges_count;

  // ENUM MODES
  enum display_method { NONE, CIRCLE, SQUARE };
  enum projection_type { PARALLEL, CENTRAL };
  enum edges_type { SOLID, DASHED };

  ~MainWindow();


private slots:
  void on_openObjFile_clicked();

  void on_renderObjFile_clicked();

  void on_closeObject_clicked();

private:
  void set_mainwindow_attributes();
  void bind_slots();
  void restore_default_values();

  // Windows transition
  QPoint cur_pos;
  QPoint new_pos;

  QSettings *settings;
  QString gif_name;
  int frames_counter = 0;
  QTimer *timer;
};
#endif  // MAINWINDOW_H
