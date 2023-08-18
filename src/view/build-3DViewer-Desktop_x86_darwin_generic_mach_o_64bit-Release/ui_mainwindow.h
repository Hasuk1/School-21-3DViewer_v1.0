/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "my_ogl_widget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose_file;
    QAction *actionOpen_obj_file;
    QWidget *centralwidget;
    my_ogl_widget *OGLWindow;
    QGroupBox *groupBox;
    QLineEdit *pathToObjFile;
    QPushButton *openObjFile;
    QPushButton *renderObjFile;
    QPushButton *closeObject;
    QGroupBox *groupBox_3;
    QSlider *moveByX;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QSlider *moveByY;
    QSlider *moveByZ;
    QLabel *label_24;
    QLabel *label_25;
    QGroupBox *groupBox_4;
    QSlider *scaleSlider;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_7;
    QGroupBox *groupBox_8;
    QLabel *label_32;
    QLabel *label_40;
    QLabel *label_31;
    QLabel *label_33;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *objName;
    QLabel *edgesCount;
    QLabel *veticesCount;
    QLabel *label_26;
    QGroupBox *groupBox_9;
    QComboBox *projectionType;
    QLabel *label_44;
    QGroupBox *groupBox_6;
    QSlider *rotateByX;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QSlider *rotateByY;
    QSlider *rotateByZ;
    QLabel *label_39;
    QLabel *label_45;
    QLabel *label_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1440, 900);
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(15);
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"border-radius: 10px;\n"
"    text-align: center;\n"
"}\n"
"QWidget{\n"
"    background-color: rgb(71, 71, 71);\n"
"}\n"
"QMenuBar{\n"
"    color: #596686;\n"
"    background-color: rgba(0, 0, 0, 0.08);\n"
"    text-align: center;\n"
"}\n"
"QMenu{\n"
"color: #596686;\n"
"    background-color: rgba(0, 0, 0, 0.16);\n"
"    border-radius: 5px; \n"
"    text-align: center;\n"
"}\n"
"QStatusBar{\n"
"color: #596686;\n"
"    background-color: rgba(0, 0, 0, 0.16);\n"
"    text-align: center;\n"
"}\n"
"\n"
""));
        actionClose_file = new QAction(MainWindow);
        actionClose_file->setObjectName(QString::fromUtf8("actionClose_file"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/close_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_file->setIcon(icon);
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        actionClose_file->setFont(font1);
        actionOpen_obj_file = new QAction(MainWindow);
        actionOpen_obj_file->setObjectName(QString::fromUtf8("actionOpen_obj_file"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/open_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_obj_file->setIcon(icon1);
        actionOpen_obj_file->setFont(font1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        OGLWindow = new my_ogl_widget(centralwidget);
        OGLWindow->setObjectName(QString::fromUtf8("OGLWindow"));
        OGLWindow->setGeometry(QRect(10, 10, 1020, 880));
        OGLWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(150, 150, 150, 255), stop:1 rgba(50, 50, 50, 255));\n"
"border-radius: 10px;"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(1040, 790, 390, 50));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 10px;\n"
"}"));
        pathToObjFile = new QLineEdit(groupBox);
        pathToObjFile->setObjectName(QString::fromUtf8("pathToObjFile"));
        pathToObjFile->setGeometry(QRect(10, 10, 275, 30));
        pathToObjFile->setMouseTracking(true);
        pathToObjFile->setFocusPolicy(Qt::ClickFocus);
        pathToObjFile->setStyleSheet(QString::fromUtf8("background-color:rgb(30, 30, 30);\n"
"border-radius: 5px;"));
        openObjFile = new QPushButton(groupBox);
        openObjFile->setObjectName(QString::fromUtf8("openObjFile"));
        openObjFile->setGeometry(QRect(290, 10, 90, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font2.setPointSize(20);
        font2.setBold(true);
        openObjFile->setFont(font2);
        openObjFile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(100, 100, 100);\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"border-radius: 5px;\n"
"color: white;\n"
"}"));
        renderObjFile = new QPushButton(centralwidget);
        renderObjFile->setObjectName(QString::fromUtf8("renderObjFile"));
        renderObjFile->setGeometry(QRect(1040, 850, 345, 40));
        QFont font3;
        font3.setPointSize(25);
        font3.setBold(true);
        renderObjFile->setFont(font3);
        renderObjFile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(100, 100, 100);\n"
"border: 2px solid rgb(190, 249, 81); \n"
"border-radius: 10px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"border: 2px solid rgb(200, 249, 100); \n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        closeObject = new QPushButton(centralwidget);
        closeObject->setObjectName(QString::fromUtf8("closeObject"));
        closeObject->setGeometry(QRect(1390, 850, 40, 40));
        QFont font4;
        font4.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font4.setPointSize(45);
        font4.setBold(true);
        closeObject->setFont(font4);
        closeObject->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(100, 100, 100);\n"
"border-radius: 10px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"color: white;\n"
"padding: 0px 0px 6px 0px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"border-radius: 10px;\n"
"border: 2px solid rgb(200, 249, 100); \n"
"color: white;\n"
"}"));
        closeObject->setAutoDefault(false);
        closeObject->setFlat(false);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(1040, 382, 390, 110));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        groupBox_3->setFont(font5);
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        moveByX = new QSlider(groupBox_3);
        moveByX->setObjectName(QString::fromUtf8("moveByX"));
        moveByX->setGeometry(QRect(35, 15, 341, 25));
        moveByX->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    background-color: rgba(30, 30, 30,0);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background-color: rgb(30, 30, 30);\n"
"    height: 10px;\n"
"    border-radius: 3px;\n"
"    margin: 0 5px; /* \320\224\320\276\320\261\320\260\320\262\320\273\321\217\320\265\320\274 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \321\201 \320\273\320\265\320\262\320\276\320\271 \320\270 \320\277\321\200\320\260\320\262\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background-color: rgb(190, 249, 81);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"    margin: -3px 0;\n"
"    border-radius: 6px;\n"
"}\n"
""));
        moveByX->setMinimum(-100);
        moveByX->setMaximum(100);
        moveByX->setValue(0);
        moveByX->setSliderPosition(0);
        moveByX->setTracking(true);
        moveByX->setOrientation(Qt::Horizontal);
        moveByX->setInvertedAppearance(false);
        moveByX->setInvertedControls(false);
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(11, 16, 25, 25));
        QFont font6;
        font6.setPointSize(21);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setUnderline(false);
        font6.setStrikeOut(false);
        label_20->setFont(font6);
        label_20->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 15, 25, 25));
        QFont font7;
        font7.setPointSize(20);
        font7.setBold(true);
        font7.setItalic(false);
        label_21->setFont(font7);
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(11, 46, 25, 25));
        QFont font8;
        font8.setPointSize(21);
        font8.setBold(true);
        font8.setItalic(false);
        label_22->setFont(font8);
        label_22->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 45, 25, 25));
        label_23->setFont(font6);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_23->setAlignment(Qt::AlignCenter);
        moveByY = new QSlider(groupBox_3);
        moveByY->setObjectName(QString::fromUtf8("moveByY"));
        moveByY->setGeometry(QRect(35, 45, 341, 25));
        moveByY->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    background-color: rgba(30, 30, 30,0);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background-color: rgb(30, 30, 30);\n"
"    height: 10px;\n"
"    border-radius: 3px;\n"
"    margin: 0 5px; /* \320\224\320\276\320\261\320\260\320\262\320\273\321\217\320\265\320\274 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \321\201 \320\273\320\265\320\262\320\276\320\271 \320\270 \320\277\321\200\320\260\320\262\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background-color: rgb(190, 249, 81);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"    margin: -3px 0;\n"
"    border-radius: 6px;\n"
"}\n"
""));
        moveByY->setMinimum(-100);
        moveByY->setMaximum(100);
        moveByY->setValue(0);
        moveByY->setSliderPosition(0);
        moveByY->setTracking(true);
        moveByY->setOrientation(Qt::Horizontal);
        moveByY->setInvertedAppearance(false);
        moveByY->setInvertedControls(false);
        moveByZ = new QSlider(groupBox_3);
        moveByZ->setObjectName(QString::fromUtf8("moveByZ"));
        moveByZ->setGeometry(QRect(35, 75, 341, 25));
        moveByZ->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    background-color: rgba(30, 30, 30,0);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background-color: rgb(30, 30, 30);\n"
"    height: 10px;\n"
"    border-radius: 3px;\n"
"    margin: 0 5px; /* \320\224\320\276\320\261\320\260\320\262\320\273\321\217\320\265\320\274 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \321\201 \320\273\320\265\320\262\320\276\320\271 \320\270 \320\277\321\200\320\260\320\262\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background-color: rgb(190, 249, 81);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"    margin: -3px 0;\n"
"    border-radius: 6px;\n"
"}\n"
""));
        moveByZ->setMinimum(-100);
        moveByZ->setMaximum(100);
        moveByZ->setValue(0);
        moveByZ->setSliderPosition(0);
        moveByZ->setTracking(true);
        moveByZ->setOrientation(Qt::Horizontal);
        moveByZ->setInvertedAppearance(false);
        moveByZ->setInvertedControls(false);
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(11, 76, 25, 25));
        label_24->setFont(font6);
        label_24->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 75, 25, 25));
        label_25->setFont(font7);
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_25->setAlignment(Qt::AlignCenter);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(1040, 510, 390, 50));
        groupBox_4->setFont(font5);
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        scaleSlider = new QSlider(groupBox_4);
        scaleSlider->setObjectName(QString::fromUtf8("scaleSlider"));
        scaleSlider->setGeometry(QRect(35, 15, 325, 25));
        scaleSlider->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    background-color: rgba(30, 30, 30,0);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background-color: rgb(30, 30, 30);\n"
"    height: 10px;\n"
"    border-radius: 3px;\n"
"    margin: 0 5px; /* \320\224\320\276\320\261\320\260\320\262\320\273\321\217\320\265\320\274 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \321\201 \320\273\320\265\320\262\320\276\320\271 \320\270 \320\277\321\200\320\260\320\262\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background-color: rgb(190, 249, 81);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"    margin: -3px 0;\n"
"    border-radius: 6px;\n"
"}\n"
""));
        scaleSlider->setMinimum(1);
        scaleSlider->setMaximum(200);
        scaleSlider->setValue(50);
        scaleSlider->setSliderPosition(50);
        scaleSlider->setTracking(true);
        scaleSlider->setOrientation(Qt::Horizontal);
        scaleSlider->setInvertedAppearance(false);
        scaleSlider->setInvertedControls(false);
        label_27 = new QLabel(groupBox_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(11, 16, 25, 25));
        label_27->setFont(font6);
        label_27->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_27->setAlignment(Qt::AlignCenter);
        label_28 = new QLabel(groupBox_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(10, 15, 25, 25));
        label_28->setFont(font7);
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_28->setAlignment(Qt::AlignCenter);
        label_29 = new QLabel(groupBox_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(361, 16, 25, 25));
        label_29->setFont(font6);
        label_29->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_29->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(groupBox_4);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(360, 15, 25, 25));
        label_30->setFont(font7);
        label_30->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_30->setAlignment(Qt::AlignCenter);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(1040, 10, 390, 82));
        groupBox_5->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(1040, 112, 390, 82));
        groupBox_7->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(1040, 214, 390, 82));
        groupBox_8->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        label_32 = new QLabel(centralwidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(1200, 730, 100, 20));
        label_32->setFont(font5);
        label_32->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(190, 249, 81); "));
        label_32->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_40 = new QLabel(centralwidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(1200, 760, 100, 20));
        label_40->setFont(font5);
        label_40->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(190, 249, 81); "));
        label_40->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_31 = new QLabel(centralwidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(1200, 700, 100, 20));
        label_31->setFont(font5);
        label_31->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(190, 249, 81); "));
        label_31->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_33 = new QLabel(centralwidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(1280, 498, 100, 24));
        label_33->setFont(font5);
        label_33->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        label_33->setAlignment(Qt::AlignCenter);
        label_41 = new QLabel(centralwidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(1080, 284, 150, 24));
        label_41->setFont(font5);
        label_41->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        label_41->setAlignment(Qt::AlignCenter);
        label_42 = new QLabel(centralwidget);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(1080, 182, 150, 24));
        label_42->setFont(font5);
        label_42->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        label_42->setAlignment(Qt::AlignCenter);
        label_43 = new QLabel(centralwidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(1080, 80, 150, 24));
        label_43->setFont(font5);
        label_43->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        label_43->setAlignment(Qt::AlignCenter);
        objName = new QLabel(centralwidget);
        objName->setObjectName(QString::fromUtf8("objName"));
        objName->setGeometry(QRect(1300, 700, 130, 20));
        objName->setFont(font1);
        objName->setLayoutDirection(Qt::RightToLeft);
        objName->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: white; "));
        objName->setScaledContents(false);
        objName->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        objName->setWordWrap(false);
        edgesCount = new QLabel(centralwidget);
        edgesCount->setObjectName(QString::fromUtf8("edgesCount"));
        edgesCount->setGeometry(QRect(1300, 730, 130, 20));
        edgesCount->setFont(font1);
        edgesCount->setLayoutDirection(Qt::RightToLeft);
        edgesCount->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: white; "));
        edgesCount->setScaledContents(false);
        edgesCount->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        edgesCount->setWordWrap(false);
        veticesCount = new QLabel(centralwidget);
        veticesCount->setObjectName(QString::fromUtf8("veticesCount"));
        veticesCount->setGeometry(QRect(1300, 760, 130, 20));
        veticesCount->setFont(font1);
        veticesCount->setLayoutDirection(Qt::RightToLeft);
        veticesCount->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: white; "));
        veticesCount->setScaledContents(false);
        veticesCount->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        veticesCount->setWordWrap(false);
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(1280, 370, 100, 24));
        label_26->setFont(font5);
        label_26->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        label_26->setAlignment(Qt::AlignCenter);
        groupBox_9 = new QGroupBox(centralwidget);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(1040, 320, 390, 41));
        groupBox_9->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        projectionType = new QComboBox(groupBox_9);
        projectionType->addItem(QString());
        projectionType->addItem(QString());
        projectionType->setObjectName(QString::fromUtf8("projectionType"));
        projectionType->setGeometry(QRect(199, 7, 181, 25));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(projectionType->sizePolicy().hasHeightForWidth());
        projectionType->setSizePolicy(sizePolicy);
        projectionType->setMaximumSize(QSize(190, 65));
        QFont font9;
        font9.setPointSize(16);
        font9.setBold(true);
        projectionType->setFont(font9);
        projectionType->setFocusPolicy(Qt::ClickFocus);
        projectionType->setLayoutDirection(Qt::LeftToRight);
        projectionType->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(30, 30, 30);\n"
"    border-radius: 7px; \n"
"    text-align: center;\n"
"}\n"
"\n"
"QComboBox::view {\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(211, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border-radius: 6px; \n"
"}"));
        projectionType->setInsertPolicy(QComboBox::InsertAtTop);
        projectionType->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        label_44 = new QLabel(centralwidget);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(1080, 345, 150, 24));
        label_44->setFont(font5);
        label_44->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        label_44->setAlignment(Qt::AlignCenter);
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(1040, 580, 390, 110));
        groupBox_6->setFont(font5);
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        groupBox_6->setAlignment(Qt::AlignCenter);
        rotateByX = new QSlider(groupBox_6);
        rotateByX->setObjectName(QString::fromUtf8("rotateByX"));
        rotateByX->setGeometry(QRect(35, 15, 341, 25));
        rotateByX->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    background-color: rgba(30, 30, 30,0);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background-color: rgb(30, 30, 30);\n"
"    height: 10px;\n"
"    border-radius: 3px;\n"
"    margin: 0 5px; /* \320\224\320\276\320\261\320\260\320\262\320\273\321\217\320\265\320\274 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \321\201 \320\273\320\265\320\262\320\276\320\271 \320\270 \320\277\321\200\320\260\320\262\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background-color: rgb(190, 249, 81);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"    margin: -3px 0;\n"
"    border-radius: 6px;\n"
"}\n"
""));
        rotateByX->setMinimum(-360);
        rotateByX->setMaximum(360);
        rotateByX->setValue(0);
        rotateByX->setSliderPosition(0);
        rotateByX->setTracking(true);
        rotateByX->setOrientation(Qt::Horizontal);
        rotateByX->setInvertedAppearance(false);
        rotateByX->setInvertedControls(false);
        label_35 = new QLabel(groupBox_6);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(11, 16, 25, 25));
        label_35->setFont(font6);
        label_35->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_35->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(groupBox_6);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(10, 15, 25, 25));
        label_36->setFont(font7);
        label_36->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_36->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(groupBox_6);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(11, 46, 25, 25));
        label_37->setFont(font8);
        label_37->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_37->setAlignment(Qt::AlignCenter);
        label_38 = new QLabel(groupBox_6);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(10, 45, 25, 25));
        label_38->setFont(font6);
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_38->setAlignment(Qt::AlignCenter);
        rotateByY = new QSlider(groupBox_6);
        rotateByY->setObjectName(QString::fromUtf8("rotateByY"));
        rotateByY->setGeometry(QRect(35, 45, 341, 25));
        rotateByY->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    background-color: rgba(30, 30, 30,0);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background-color: rgb(30, 30, 30);\n"
"    height: 10px;\n"
"    border-radius: 3px;\n"
"    margin: 0 5px; /* \320\224\320\276\320\261\320\260\320\262\320\273\321\217\320\265\320\274 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \321\201 \320\273\320\265\320\262\320\276\320\271 \320\270 \320\277\321\200\320\260\320\262\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background-color: rgb(190, 249, 81);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"    margin: -3px 0;\n"
"    border-radius: 6px;\n"
"}\n"
""));
        rotateByY->setMinimum(-360);
        rotateByY->setMaximum(360);
        rotateByY->setValue(0);
        rotateByY->setSliderPosition(0);
        rotateByY->setTracking(true);
        rotateByY->setOrientation(Qt::Horizontal);
        rotateByY->setInvertedAppearance(false);
        rotateByY->setInvertedControls(false);
        rotateByZ = new QSlider(groupBox_6);
        rotateByZ->setObjectName(QString::fromUtf8("rotateByZ"));
        rotateByZ->setGeometry(QRect(35, 75, 341, 25));
        rotateByZ->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    background-color: rgba(30, 30, 30,0);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background-color: rgb(30, 30, 30);\n"
"    height: 10px;\n"
"    border-radius: 3px;\n"
"    margin: 0 5px; /* \320\224\320\276\320\261\320\260\320\262\320\273\321\217\320\265\320\274 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 \321\201 \320\273\320\265\320\262\320\276\320\271 \320\270 \320\277\321\200\320\260\320\262\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background-color: rgb(190, 249, 81);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"    margin: -3px 0;\n"
"    border-radius: 6px;\n"
"}\n"
""));
        rotateByZ->setMinimum(-360);
        rotateByZ->setMaximum(360);
        rotateByZ->setValue(0);
        rotateByZ->setSliderPosition(0);
        rotateByZ->setTracking(true);
        rotateByZ->setOrientation(Qt::Horizontal);
        rotateByZ->setInvertedAppearance(false);
        rotateByZ->setInvertedControls(false);
        label_39 = new QLabel(groupBox_6);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(11, 76, 25, 25));
        label_39->setFont(font6);
        label_39->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_39->setAlignment(Qt::AlignCenter);
        label_45 = new QLabel(groupBox_6);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(10, 75, 25, 25));
        label_45->setFont(font7);
        label_45->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_45->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1280, 570, 100, 24));
        label_7->setFont(font5);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        label_7->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        closeObject->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionClose_file->setText(QCoreApplication::translate("MainWindow", "Close file", nullptr));
        actionOpen_obj_file->setText(QCoreApplication::translate("MainWindow", "Open .obj file", nullptr));
        groupBox->setTitle(QString());
        openObjFile->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        renderObjFile->setText(QCoreApplication::translate("MainWindow", "Render", nullptr));
        closeObject->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        groupBox_3->setTitle(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        groupBox_4->setTitle(QString());
        label_27->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        groupBox_5->setTitle(QString());
        groupBox_7->setTitle(QString());
        groupBox_8->setTitle(QString());
        label_32->setText(QCoreApplication::translate("MainWindow", "Edges:", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Vertices:", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "File name:", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "SCALE", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "BACKGROUND", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "VERTICES", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "EDGES", nullptr));
        objName->setText(QString());
        edgesCount->setText(QString());
        veticesCount->setText(QString());
        label_26->setText(QCoreApplication::translate("MainWindow", "MOVE", nullptr));
        groupBox_9->setTitle(QString());
        projectionType->setItemText(0, QCoreApplication::translate("MainWindow", "Parallel", nullptr));
        projectionType->setItemText(1, QCoreApplication::translate("MainWindow", "Central", nullptr));

        label_44->setText(QCoreApplication::translate("MainWindow", "PROJECTION", nullptr));
        groupBox_6->setTitle(QString());
        label_35->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ROTATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
