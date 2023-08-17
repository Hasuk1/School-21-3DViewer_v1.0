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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
        pathToObjFile->setGeometry(QRect(10, 10, 270, 30));
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
"border-radius: 10px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        closeObject = new QPushButton(centralwidget);
        closeObject->setObjectName(QString::fromUtf8("closeObject"));
        closeObject->setGeometry(QRect(1390, 850, 40, 40));
        QFont font4;
        font4.setFamilies({QString::fromUtf8(".AppleKoreanFont")});
        font4.setPointSize(50);
        font4.setBold(true);
        closeObject->setFont(font4);
        closeObject->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(100, 100, 100);\n"
"border-radius: 10px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"border-radius: 10px;\n"
"color: white;\n"
"}"));
        closeObject->setAutoDefault(false);
        closeObject->setFlat(false);
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
