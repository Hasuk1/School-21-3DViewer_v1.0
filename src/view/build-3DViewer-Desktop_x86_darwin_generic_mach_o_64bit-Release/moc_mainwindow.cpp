/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../3DViewer/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 22), // "on_openObjFile_clicked"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 24), // "on_renderObjFile_clicked"
QT_MOC_LITERAL(60, 22), // "on_closeObject_clicked"
QT_MOC_LITERAL(83, 27), // "on_scaleSlider_valueChanged"
QT_MOC_LITERAL(111, 5), // "value"
QT_MOC_LITERAL(117, 37), // "on_projectionType_currentInde..."
QT_MOC_LITERAL(155, 5), // "index"
QT_MOC_LITERAL(161, 23), // "on_moveByX_valueChanged"
QT_MOC_LITERAL(185, 23), // "on_moveByY_valueChanged"
QT_MOC_LITERAL(209, 23), // "on_moveByZ_valueChanged"
QT_MOC_LITERAL(233, 25), // "on_rotateByX_valueChanged"
QT_MOC_LITERAL(259, 25), // "on_rotateByY_valueChanged"
QT_MOC_LITERAL(285, 25), // "on_rotateByZ_valueChanged"
QT_MOC_LITERAL(311, 17) // "setStandartAffine"

    },
    "MainWindow\0on_openObjFile_clicked\0\0"
    "on_renderObjFile_clicked\0"
    "on_closeObject_clicked\0"
    "on_scaleSlider_valueChanged\0value\0"
    "on_projectionType_currentIndexChanged\0"
    "index\0on_moveByX_valueChanged\0"
    "on_moveByY_valueChanged\0on_moveByZ_valueChanged\0"
    "on_rotateByX_valueChanged\0"
    "on_rotateByY_valueChanged\0"
    "on_rotateByZ_valueChanged\0setStandartAffine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    1,   89,    2, 0x08,    4 /* Private */,
       7,    1,   92,    2, 0x08,    6 /* Private */,
       9,    1,   95,    2, 0x08,    8 /* Private */,
      10,    1,   98,    2, 0x08,   10 /* Private */,
      11,    1,  101,    2, 0x08,   12 /* Private */,
      12,    1,  104,    2, 0x08,   14 /* Private */,
      13,    1,  107,    2, 0x08,   16 /* Private */,
      14,    1,  110,    2, 0x08,   18 /* Private */,
      15,    0,  113,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_openObjFile_clicked(); break;
        case 1: _t->on_renderObjFile_clicked(); break;
        case 2: _t->on_closeObject_clicked(); break;
        case 3: _t->on_scaleSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_projectionType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_moveByX_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_moveByY_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_moveByZ_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_rotateByX_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_rotateByY_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_rotateByZ_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setStandartAffine(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
