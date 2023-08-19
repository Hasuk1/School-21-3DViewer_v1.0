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
    QGroupBox *file;
    QLineEdit *pathToObjFile;
    QPushButton *openObjFile;
    QPushButton *renderObjFile;
    QPushButton *closeObject;
    QGroupBox *moveOBJ;
    QSlider *moveByX;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QSlider *moveByY;
    QSlider *moveByZ;
    QLabel *label_24;
    QLabel *label_25;
    QGroupBox *scaleOBJ;
    QSlider *scaleSlider;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QGroupBox *edgesSettings;
    QComboBox *edgesType;
    QSlider *edgesThickness;
    QPushButton *edgesRed;
    QPushButton *edgesOrange;
    QPushButton *edgesYellow;
    QPushButton *edgesGreen;
    QPushButton *edgesWhite;
    QPushButton *edgesReset;
    QPushButton *edgesBlue;
    QPushButton *edgesPurple;
    QGroupBox *groupBox_8;
    QPushButton *backgroundPink;
    QPushButton *backgroundBlack;
    QPushButton *backgroundBlue;
    QPushButton *backgroundGreen;
    QPushButton *backgroundReset;
    QPushButton *backgroundGray1;
    QPushButton *backgroundGray2;
    QPushButton *backgroundWhite;
    QLabel *Edges;
    QLabel *Vertices;
    QLabel *FileName;
    QLabel *SCALE;
    QLabel *EDGES;
    QLabel *objName;
    QLabel *edgesCount;
    QLabel *veticesCount;
    QLabel *MOVE;
    QGroupBox *projectionSettings;
    QComboBox *projectionType;
    QLabel *PROJECTION;
    QGroupBox *rotateOBJ;
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
    QGroupBox *verticesSettings;
    QComboBox *verticesType;
    QSlider *verticesThickness;
    QPushButton *verticesRed;
    QPushButton *verticesOrange;
    QPushButton *verticesYellow;
    QPushButton *verticesGreen;
    QPushButton *verticesWhite;
    QPushButton *verticesReset;
    QPushButton *verticesBlue;
    QPushButton *verticesPurple;
    QLabel *VERTICES;
    QLabel *PROJECTION_2;
    QPushButton *getScreanshot;
    QPushButton *getGif;

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
        file = new QGroupBox(centralwidget);
        file->setObjectName(QString::fromUtf8("file"));
        file->setGeometry(QRect(1040, 790, 390, 50));
        file->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 10px;\n"
"}"));
        pathToObjFile = new QLineEdit(file);
        pathToObjFile->setObjectName(QString::fromUtf8("pathToObjFile"));
        pathToObjFile->setGeometry(QRect(10, 10, 275, 30));
        pathToObjFile->setMouseTracking(true);
        pathToObjFile->setFocusPolicy(Qt::ClickFocus);
        pathToObjFile->setStyleSheet(QString::fromUtf8("background-color:rgb(30, 30, 30);\n"
"border-radius: 5px;"));
        openObjFile = new QPushButton(file);
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
        moveOBJ = new QGroupBox(centralwidget);
        moveOBJ->setObjectName(QString::fromUtf8("moveOBJ"));
        moveOBJ->setGeometry(QRect(1040, 344, 390, 110));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        moveOBJ->setFont(font5);
        moveOBJ->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        moveOBJ->setAlignment(Qt::AlignCenter);
        moveByX = new QSlider(moveOBJ);
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
        label_20 = new QLabel(moveOBJ);
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
        label_21 = new QLabel(moveOBJ);
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
        label_22 = new QLabel(moveOBJ);
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
        label_23 = new QLabel(moveOBJ);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 45, 25, 25));
        label_23->setFont(font6);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_23->setAlignment(Qt::AlignCenter);
        moveByY = new QSlider(moveOBJ);
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
        moveByZ = new QSlider(moveOBJ);
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
        label_24 = new QLabel(moveOBJ);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(11, 76, 25, 25));
        label_24->setFont(font6);
        label_24->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(moveOBJ);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 75, 25, 25));
        label_25->setFont(font7);
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_25->setAlignment(Qt::AlignCenter);
        scaleOBJ = new QGroupBox(centralwidget);
        scaleOBJ->setObjectName(QString::fromUtf8("scaleOBJ"));
        scaleOBJ->setGeometry(QRect(1040, 472, 390, 50));
        scaleOBJ->setFont(font5);
        scaleOBJ->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        scaleOBJ->setAlignment(Qt::AlignCenter);
        scaleSlider = new QSlider(scaleOBJ);
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
        label_27 = new QLabel(scaleOBJ);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(11, 16, 25, 25));
        label_27->setFont(font6);
        label_27->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_27->setAlignment(Qt::AlignCenter);
        label_28 = new QLabel(scaleOBJ);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(10, 15, 25, 25));
        label_28->setFont(font7);
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_28->setAlignment(Qt::AlignCenter);
        label_29 = new QLabel(scaleOBJ);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(361, 16, 25, 25));
        label_29->setFont(font6);
        label_29->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_29->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(scaleOBJ);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(360, 15, 25, 25));
        label_30->setFont(font7);
        label_30->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_30->setAlignment(Qt::AlignCenter);
        edgesSettings = new QGroupBox(centralwidget);
        edgesSettings->setObjectName(QString::fromUtf8("edgesSettings"));
        edgesSettings->setGeometry(QRect(1040, 10, 390, 82));
        edgesSettings->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        edgesType = new QComboBox(edgesSettings);
        edgesType->addItem(QString());
        edgesType->addItem(QString());
        edgesType->setObjectName(QString::fromUtf8("edgesType"));
        edgesType->setGeometry(QRect(195, 12, 183, 25));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(edgesType->sizePolicy().hasHeightForWidth());
        edgesType->setSizePolicy(sizePolicy);
        edgesType->setMaximumSize(QSize(190, 65));
        QFont font9;
        font9.setPointSize(16);
        font9.setBold(true);
        edgesType->setFont(font9);
        edgesType->setFocusPolicy(Qt::ClickFocus);
        edgesType->setLayoutDirection(Qt::LeftToRight);
        edgesType->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(30, 30, 30);\n"
"    border-radius: 7px; \n"
"    text-align: center;\n"
"}\n"
"\n"
"QComboBox::view {\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(211, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border-radius: 6px; \n"
"}"));
        edgesType->setInsertPolicy(QComboBox::InsertAtTop);
        edgesType->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        edgesThickness = new QSlider(edgesSettings);
        edgesThickness->setObjectName(QString::fromUtf8("edgesThickness"));
        edgesThickness->setGeometry(QRect(10, 12, 180, 25));
        edgesThickness->setStyleSheet(QString::fromUtf8("QSlider {\n"
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
        edgesThickness->setMinimum(1);
        edgesThickness->setMaximum(10);
        edgesThickness->setValue(1);
        edgesThickness->setSliderPosition(1);
        edgesThickness->setTracking(true);
        edgesThickness->setOrientation(Qt::Horizontal);
        edgesThickness->setInvertedAppearance(false);
        edgesThickness->setInvertedControls(false);
        edgesRed = new QPushButton(edgesSettings);
        edgesRed->setObjectName(QString::fromUtf8("edgesRed"));
        edgesRed->setGeometry(QRect(15, 40, 20, 20));
        edgesRed->setFont(font2);
        edgesRed->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 54, 48);\n"
"color: rgb(211, 54, 48);\n"
"border-radius: 5px;"));
        edgesOrange = new QPushButton(edgesSettings);
        edgesOrange->setObjectName(QString::fromUtf8("edgesOrange"));
        edgesOrange->setGeometry(QRect(40, 40, 20, 20));
        edgesOrange->setFont(font2);
        edgesOrange->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 148, 61);\n"
"color: rgb(226, 148, 61);\n"
"border-radius: 5px;"));
        edgesYellow = new QPushButton(edgesSettings);
        edgesYellow->setObjectName(QString::fromUtf8("edgesYellow"));
        edgesYellow->setGeometry(QRect(65, 40, 20, 20));
        edgesYellow->setFont(font2);
        edgesYellow->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 216, 77);\n"
"color: rgb(242, 216, 77);\n"
"border-radius: 5px;\n"
""));
        edgesGreen = new QPushButton(edgesSettings);
        edgesGreen->setObjectName(QString::fromUtf8("edgesGreen"));
        edgesGreen->setGeometry(QRect(90, 40, 20, 20));
        edgesGreen->setFont(font2);
        edgesGreen->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 195, 89);\n"
"color:rgb(102, 195, 89);\n"
"border-radius: 5px;"));
        edgesWhite = new QPushButton(edgesSettings);
        edgesWhite->setObjectName(QString::fromUtf8("edgesWhite"));
        edgesWhite->setGeometry(QRect(165, 40, 20, 20));
        edgesWhite->setFont(font2);
        edgesWhite->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;"));
        edgesReset = new QPushButton(edgesSettings);
        edgesReset->setObjectName(QString::fromUtf8("edgesReset"));
        edgesReset->setGeometry(QRect(195, 50, 183, 20));
        QFont font10;
        font10.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font10.setPointSize(18);
        font10.setBold(true);
        edgesReset->setFont(font10);
        edgesReset->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        edgesBlue = new QPushButton(edgesSettings);
        edgesBlue->setObjectName(QString::fromUtf8("edgesBlue"));
        edgesBlue->setGeometry(QRect(115, 40, 20, 20));
        edgesBlue->setFont(font2);
        edgesBlue->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 83, 237);\n"
"color: rgb(34, 83, 237);\n"
"border-radius: 5px;"));
        edgesPurple = new QPushButton(edgesSettings);
        edgesPurple->setObjectName(QString::fromUtf8("edgesPurple"));
        edgesPurple->setGeometry(QRect(140, 40, 20, 20));
        edgesPurple->setFont(font2);
        edgesPurple->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 15, 162);\n"
"color: rgb(95, 15, 162);\n"
"border-radius: 5px;"));
        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(1040, 214, 390, 48));
        groupBox_8->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        backgroundPink = new QPushButton(groupBox_8);
        backgroundPink->setObjectName(QString::fromUtf8("backgroundPink"));
        backgroundPink->setGeometry(QRect(15, 10, 20, 18));
        backgroundPink->setFont(font2);
        backgroundPink->setStyleSheet(QString::fromUtf8("background-color:rgb(245, 215, 255);\n"
"color: rgb(245, 215, 255);\n"
"border-radius: 5px;"));
        backgroundBlack = new QPushButton(groupBox_8);
        backgroundBlack->setObjectName(QString::fromUtf8("backgroundBlack"));
        backgroundBlack->setGeometry(QRect(90, 10, 20, 18));
        backgroundBlack->setFont(font2);
        backgroundBlack->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:rgb(0, 0, 0);\n"
"border-radius: 5px;"));
        backgroundBlue = new QPushButton(groupBox_8);
        backgroundBlue->setObjectName(QString::fromUtf8("backgroundBlue"));
        backgroundBlue->setGeometry(QRect(65, 10, 20, 18));
        backgroundBlue->setFont(font2);
        backgroundBlue->setStyleSheet(QString::fromUtf8("background-color:rgb(66, 66, 169);\n"
"color: rgb(66, 66, 169);\n"
"border-radius: 5px;"));
        backgroundGreen = new QPushButton(groupBox_8);
        backgroundGreen->setObjectName(QString::fromUtf8("backgroundGreen"));
        backgroundGreen->setGeometry(QRect(40, 10, 20, 18));
        backgroundGreen->setFont(font2);
        backgroundGreen->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 249, 81); \n"
"color:rgb(190, 249, 81); \n"
"border-radius: 5px;"));
        backgroundReset = new QPushButton(groupBox_8);
        backgroundReset->setObjectName(QString::fromUtf8("backgroundReset"));
        backgroundReset->setGeometry(QRect(195, 10, 183, 28));
        backgroundReset->setFont(font10);
        backgroundReset->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        backgroundGray1 = new QPushButton(groupBox_8);
        backgroundGray1->setObjectName(QString::fromUtf8("backgroundGray1"));
        backgroundGray1->setGeometry(QRect(115, 10, 20, 18));
        backgroundGray1->setFont(font2);
        backgroundGray1->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);\n"
"color: rgb(27, 27, 27);\n"
"border-radius: 5px;"));
        backgroundGray2 = new QPushButton(groupBox_8);
        backgroundGray2->setObjectName(QString::fromUtf8("backgroundGray2"));
        backgroundGray2->setGeometry(QRect(140, 10, 20, 18));
        backgroundGray2->setFont(font2);
        backgroundGray2->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 102, 102);\n"
"color: rgb(102, 102, 102);\n"
"border-radius: 5px;"));
        backgroundWhite = new QPushButton(groupBox_8);
        backgroundWhite->setObjectName(QString::fromUtf8("backgroundWhite"));
        backgroundWhite->setGeometry(QRect(165, 10, 20, 18));
        backgroundWhite->setFont(font2);
        backgroundWhite->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;"));
        Edges = new QLabel(centralwidget);
        Edges->setObjectName(QString::fromUtf8("Edges"));
        Edges->setGeometry(QRect(1200, 730, 100, 20));
        Edges->setFont(font5);
        Edges->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(190, 249, 81); "));
        Edges->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        Vertices = new QLabel(centralwidget);
        Vertices->setObjectName(QString::fromUtf8("Vertices"));
        Vertices->setGeometry(QRect(1200, 760, 100, 20));
        Vertices->setFont(font5);
        Vertices->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(190, 249, 81); "));
        Vertices->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        FileName = new QLabel(centralwidget);
        FileName->setObjectName(QString::fromUtf8("FileName"));
        FileName->setGeometry(QRect(1200, 700, 100, 20));
        FileName->setFont(font5);
        FileName->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(190, 249, 81); "));
        FileName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        SCALE = new QLabel(centralwidget);
        SCALE->setObjectName(QString::fromUtf8("SCALE"));
        SCALE->setGeometry(QRect(1280, 460, 100, 24));
        QFont font11;
        font11.setPointSize(19);
        font11.setBold(true);
        SCALE->setFont(font11);
        SCALE->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        SCALE->setAlignment(Qt::AlignCenter);
        EDGES = new QLabel(centralwidget);
        EDGES->setObjectName(QString::fromUtf8("EDGES"));
        EDGES->setGeometry(QRect(1080, 80, 145, 24));
        EDGES->setFont(font11);
        EDGES->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        EDGES->setAlignment(Qt::AlignCenter);
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
        MOVE = new QLabel(centralwidget);
        MOVE->setObjectName(QString::fromUtf8("MOVE"));
        MOVE->setGeometry(QRect(1280, 332, 100, 24));
        MOVE->setFont(font11);
        MOVE->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        MOVE->setAlignment(Qt::AlignCenter);
        projectionSettings = new QGroupBox(centralwidget);
        projectionSettings->setObjectName(QString::fromUtf8("projectionSettings"));
        projectionSettings->setGeometry(QRect(1040, 282, 390, 40));
        projectionSettings->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        projectionType = new QComboBox(projectionSettings);
        projectionType->addItem(QString());
        projectionType->addItem(QString());
        projectionType->setObjectName(QString::fromUtf8("projectionType"));
        projectionType->setGeometry(QRect(195, 7, 183, 25));
        sizePolicy.setHeightForWidth(projectionType->sizePolicy().hasHeightForWidth());
        projectionType->setSizePolicy(sizePolicy);
        projectionType->setMaximumSize(QSize(190, 65));
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
        PROJECTION = new QLabel(centralwidget);
        PROJECTION->setObjectName(QString::fromUtf8("PROJECTION"));
        PROJECTION->setGeometry(QRect(1080, 310, 145, 24));
        PROJECTION->setFont(font11);
        PROJECTION->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        PROJECTION->setAlignment(Qt::AlignCenter);
        rotateOBJ = new QGroupBox(centralwidget);
        rotateOBJ->setObjectName(QString::fromUtf8("rotateOBJ"));
        rotateOBJ->setGeometry(QRect(1040, 542, 390, 110));
        rotateOBJ->setFont(font5);
        rotateOBJ->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        rotateOBJ->setAlignment(Qt::AlignCenter);
        rotateByX = new QSlider(rotateOBJ);
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
        label_35 = new QLabel(rotateOBJ);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(11, 16, 25, 25));
        label_35->setFont(font6);
        label_35->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_35->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(rotateOBJ);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(10, 15, 25, 25));
        label_36->setFont(font7);
        label_36->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_36->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(rotateOBJ);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(11, 46, 25, 25));
        label_37->setFont(font8);
        label_37->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_37->setAlignment(Qt::AlignCenter);
        label_38 = new QLabel(rotateOBJ);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(10, 45, 25, 25));
        label_38->setFont(font6);
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_38->setAlignment(Qt::AlignCenter);
        rotateByY = new QSlider(rotateOBJ);
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
        rotateByZ = new QSlider(rotateOBJ);
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
        label_39 = new QLabel(rotateOBJ);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(11, 76, 25, 25));
        label_39->setFont(font6);
        label_39->setStyleSheet(QString::fromUtf8("color:#5f7c28;\n"
"background-color: rgba(1,1,1,0);"));
        label_39->setAlignment(Qt::AlignCenter);
        label_45 = new QLabel(rotateOBJ);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(10, 75, 25, 25));
        label_45->setFont(font7);
        label_45->setStyleSheet(QString::fromUtf8("color: rgb(190, 249, 81);\n"
"background-color: rgba(1,1,1,0);"));
        label_45->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1280, 530, 100, 24));
        label_7->setFont(font11);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        label_7->setAlignment(Qt::AlignCenter);
        verticesSettings = new QGroupBox(centralwidget);
        verticesSettings->setObjectName(QString::fromUtf8("verticesSettings"));
        verticesSettings->setGeometry(QRect(1040, 112, 390, 82));
        verticesSettings->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgb(60, 60, 60);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(190, 249, 81); \n"
"    padding: 0 10px;\n"
"}"));
        verticesType = new QComboBox(verticesSettings);
        verticesType->addItem(QString());
        verticesType->addItem(QString());
        verticesType->addItem(QString());
        verticesType->setObjectName(QString::fromUtf8("verticesType"));
        verticesType->setGeometry(QRect(195, 12, 183, 25));
        sizePolicy.setHeightForWidth(verticesType->sizePolicy().hasHeightForWidth());
        verticesType->setSizePolicy(sizePolicy);
        verticesType->setMaximumSize(QSize(190, 65));
        verticesType->setFont(font9);
        verticesType->setFocusPolicy(Qt::ClickFocus);
        verticesType->setLayoutDirection(Qt::LeftToRight);
        verticesType->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(30, 30, 30);\n"
"    border-radius: 7px; \n"
"    text-align: center;\n"
"}\n"
"\n"
"QComboBox::view {\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(211, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border-radius: 6px; \n"
"}"));
        verticesType->setInsertPolicy(QComboBox::InsertAtTop);
        verticesType->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        verticesThickness = new QSlider(verticesSettings);
        verticesThickness->setObjectName(QString::fromUtf8("verticesThickness"));
        verticesThickness->setGeometry(QRect(10, 12, 180, 25));
        verticesThickness->setStyleSheet(QString::fromUtf8("QSlider {\n"
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
        verticesThickness->setMinimum(1);
        verticesThickness->setMaximum(50);
        verticesThickness->setValue(1);
        verticesThickness->setSliderPosition(1);
        verticesThickness->setTracking(true);
        verticesThickness->setOrientation(Qt::Horizontal);
        verticesThickness->setInvertedAppearance(false);
        verticesThickness->setInvertedControls(false);
        verticesRed = new QPushButton(verticesSettings);
        verticesRed->setObjectName(QString::fromUtf8("verticesRed"));
        verticesRed->setGeometry(QRect(15, 40, 20, 20));
        verticesRed->setFont(font2);
        verticesRed->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 54, 48);\n"
"color: rgb(211, 54, 48);\n"
"border-radius: 5px;"));
        verticesOrange = new QPushButton(verticesSettings);
        verticesOrange->setObjectName(QString::fromUtf8("verticesOrange"));
        verticesOrange->setGeometry(QRect(40, 40, 20, 20));
        verticesOrange->setFont(font2);
        verticesOrange->setStyleSheet(QString::fromUtf8("background-color:rgb(226, 148, 61);\n"
"color: rgb(226, 148, 61);\n"
"border-radius: 5px;"));
        verticesYellow = new QPushButton(verticesSettings);
        verticesYellow->setObjectName(QString::fromUtf8("verticesYellow"));
        verticesYellow->setGeometry(QRect(65, 40, 20, 20));
        verticesYellow->setFont(font2);
        verticesYellow->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 216, 77);\n"
"color: rgb(242, 216, 77);\n"
"border-radius: 5px;\n"
""));
        verticesGreen = new QPushButton(verticesSettings);
        verticesGreen->setObjectName(QString::fromUtf8("verticesGreen"));
        verticesGreen->setGeometry(QRect(90, 40, 20, 20));
        verticesGreen->setFont(font2);
        verticesGreen->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 195, 89);\n"
"color:rgb(102, 195, 89);\n"
"border-radius: 5px;"));
        verticesWhite = new QPushButton(verticesSettings);
        verticesWhite->setObjectName(QString::fromUtf8("verticesWhite"));
        verticesWhite->setGeometry(QRect(165, 40, 20, 20));
        verticesWhite->setFont(font2);
        verticesWhite->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;"));
        verticesReset = new QPushButton(verticesSettings);
        verticesReset->setObjectName(QString::fromUtf8("verticesReset"));
        verticesReset->setGeometry(QRect(195, 50, 183, 20));
        verticesReset->setFont(font10);
        verticesReset->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        verticesBlue = new QPushButton(verticesSettings);
        verticesBlue->setObjectName(QString::fromUtf8("verticesBlue"));
        verticesBlue->setGeometry(QRect(115, 40, 20, 20));
        verticesBlue->setFont(font2);
        verticesBlue->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 83, 237);\n"
"color: rgb(34, 83, 237);\n"
"border-radius: 5px;"));
        verticesPurple = new QPushButton(verticesSettings);
        verticesPurple->setObjectName(QString::fromUtf8("verticesPurple"));
        verticesPurple->setGeometry(QRect(140, 40, 20, 20));
        verticesPurple->setFont(font2);
        verticesPurple->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 15, 162);\n"
"color: rgb(95, 15, 162);\n"
"border-radius: 5px;"));
        VERTICES = new QLabel(centralwidget);
        VERTICES->setObjectName(QString::fromUtf8("VERTICES"));
        VERTICES->setGeometry(QRect(1080, 182, 145, 24));
        VERTICES->setFont(font11);
        VERTICES->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        VERTICES->setAlignment(Qt::AlignCenter);
        PROJECTION_2 = new QLabel(centralwidget);
        PROJECTION_2->setObjectName(QString::fromUtf8("PROJECTION_2"));
        PROJECTION_2->setGeometry(QRect(1080, 250, 145, 24));
        PROJECTION_2->setFont(font11);
        PROJECTION_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: rgb(60, 60, 60);\n"
"border-radius: 7px;\n"
"border: 2px solid rgb(190, 249, 81); \n"
"}"));
        PROJECTION_2->setAlignment(Qt::AlignCenter);
        getScreanshot = new QPushButton(centralwidget);
        getScreanshot->setObjectName(QString::fromUtf8("getScreanshot"));
        getScreanshot->setGeometry(QRect(1040, 660, 190, 32));
        getScreanshot->setFont(font5);
        getScreanshot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        getGif = new QPushButton(centralwidget);
        getGif->setObjectName(QString::fromUtf8("getGif"));
        getGif->setGeometry(QRect(1240, 660, 190, 32));
        getGif->setFont(font5);
        getGif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        file->setTitle(QString());
        openObjFile->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        renderObjFile->setText(QCoreApplication::translate("MainWindow", "Render", nullptr));
        closeObject->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        moveOBJ->setTitle(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        scaleOBJ->setTitle(QString());
        label_27->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        edgesSettings->setTitle(QString());
        edgesType->setItemText(0, QCoreApplication::translate("MainWindow", "Solid", nullptr));
        edgesType->setItemText(1, QCoreApplication::translate("MainWindow", "Dashed", nullptr));

        edgesRed->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        edgesOrange->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        edgesYellow->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        edgesGreen->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        edgesWhite->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        edgesReset->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        edgesBlue->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        edgesPurple->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        groupBox_8->setTitle(QString());
        backgroundPink->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        backgroundBlack->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        backgroundBlue->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        backgroundGreen->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        backgroundReset->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        backgroundGray1->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        backgroundGray2->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        backgroundWhite->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        Edges->setText(QCoreApplication::translate("MainWindow", "Edges:", nullptr));
        Vertices->setText(QCoreApplication::translate("MainWindow", "Vertices:", nullptr));
        FileName->setText(QCoreApplication::translate("MainWindow", "File name:", nullptr));
        SCALE->setText(QCoreApplication::translate("MainWindow", "SCALE", nullptr));
        EDGES->setText(QCoreApplication::translate("MainWindow", "EDGES", nullptr));
        objName->setText(QString());
        edgesCount->setText(QString());
        veticesCount->setText(QString());
        MOVE->setText(QCoreApplication::translate("MainWindow", "MOVE", nullptr));
        projectionSettings->setTitle(QString());
        projectionType->setItemText(0, QCoreApplication::translate("MainWindow", "Parallel", nullptr));
        projectionType->setItemText(1, QCoreApplication::translate("MainWindow", "Central", nullptr));

        PROJECTION->setText(QCoreApplication::translate("MainWindow", "PROJECTION", nullptr));
        rotateOBJ->setTitle(QString());
        label_35->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ROTATE", nullptr));
        verticesSettings->setTitle(QString());
        verticesType->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        verticesType->setItemText(1, QCoreApplication::translate("MainWindow", "Circle", nullptr));
        verticesType->setItemText(2, QCoreApplication::translate("MainWindow", "Square", nullptr));

        verticesRed->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        verticesOrange->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        verticesYellow->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        verticesGreen->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        verticesWhite->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        verticesReset->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        verticesBlue->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        verticesPurple->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        VERTICES->setText(QCoreApplication::translate("MainWindow", "VERTICES", nullptr));
        PROJECTION_2->setText(QCoreApplication::translate("MainWindow", "BACKGROUND", nullptr));
        getScreanshot->setText(QCoreApplication::translate("MainWindow", "SCREANSHOT", nullptr));
        getGif->setText(QCoreApplication::translate("MainWindow", "GIF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
