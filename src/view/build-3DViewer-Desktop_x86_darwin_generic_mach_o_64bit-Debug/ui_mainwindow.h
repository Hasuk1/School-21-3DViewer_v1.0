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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose_file;
    QAction *actionOpen_obj_file;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1400, 900);
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setPointSize(15);
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(211, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 10px;\n"
"    text-align: center;\n"
"}\n"
"QWidget{\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(211, 211, 211, 255), stop:1 rgba(255, 255, 255, 255));\n"
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1400, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Helvetica")});
        font2.setPointSize(15);
        font2.setBold(true);
        menubar->setFont(font2);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_obj_file);
        menuFile->addAction(actionClose_file);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionClose_file->setText(QCoreApplication::translate("MainWindow", "Close file", nullptr));
        actionOpen_obj_file->setText(QCoreApplication::translate("MainWindow", "Open .obj file", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
