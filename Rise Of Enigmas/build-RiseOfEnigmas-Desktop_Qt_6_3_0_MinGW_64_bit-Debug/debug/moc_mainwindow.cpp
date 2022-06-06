/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RiseOfEnigmas_src/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[42];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 18), // "EGlineColorRequest"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 5), // "color"
QT_MOC_LITERAL(37, 23), // "changeToEnglishLanguage"
QT_MOC_LITERAL(61, 22), // "changeToFrenchLanguage"
QT_MOC_LITERAL(84, 7), // "onAbout"
QT_MOC_LITERAL(92, 13), // "onSourcesLink"
QT_MOC_LITERAL(106, 13), // "goToHomehPage"
QT_MOC_LITERAL(120, 18), // "goToEulerGraphPage"
QT_MOC_LITERAL(139, 15), // "applyStyleSheet"
QT_MOC_LITERAL(155, 17), // "chooseEGlineColor"
QT_MOC_LITERAL(173, 20), // "resetEulerGraphScore"
QT_MOC_LITERAL(194, 18), // "changeEGMagnetMode"
QT_MOC_LITERAL(213, 6), // "status"
QT_MOC_LITERAL(220, 10), // "EGStepedUp"
QT_MOC_LITERAL(231, 4), // "step"
QT_MOC_LITERAL(236, 5), // "total"
QT_MOC_LITERAL(242, 17), // "setNextEulerGraph"
QT_MOC_LITERAL(260, 16), // "EGstartChallenge"
QT_MOC_LITERAL(277, 21) // "translateInstructions"

    },
    "MainWindow\0EGlineColorRequest\0\0color\0"
    "changeToEnglishLanguage\0changeToFrenchLanguage\0"
    "onAbout\0onSourcesLink\0goToHomehPage\0"
    "goToEulerGraphPage\0applyStyleSheet\0"
    "chooseEGlineColor\0resetEulerGraphScore\0"
    "changeEGMagnetMode\0status\0EGStepedUp\0"
    "step\0total\0setNextEulerGraph\0"
    "EGstartChallenge\0translateInstructions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  107,    2, 0x0a,    3 /* Public */,
       5,    0,  108,    2, 0x0a,    4 /* Public */,
       6,    0,  109,    2, 0x0a,    5 /* Public */,
       7,    0,  110,    2, 0x0a,    6 /* Public */,
       8,    0,  111,    2, 0x0a,    7 /* Public */,
       9,    0,  112,    2, 0x0a,    8 /* Public */,
      10,    0,  113,    2, 0x0a,    9 /* Public */,
      11,    0,  114,    2, 0x0a,   10 /* Public */,
      12,    0,  115,    2, 0x0a,   11 /* Public */,
      13,    1,  116,    2, 0x0a,   12 /* Public */,
      15,    2,  119,    2, 0x0a,   14 /* Public */,
      18,    0,  124,    2, 0x0a,   17 /* Public */,
      19,    0,  125,    2, 0x0a,   18 /* Public */,
      20,    0,  126,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->EGlineColorRequest((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->changeToEnglishLanguage(); break;
        case 2: _t->changeToFrenchLanguage(); break;
        case 3: _t->onAbout(); break;
        case 4: _t->onSourcesLink(); break;
        case 5: _t->goToHomehPage(); break;
        case 6: _t->goToEulerGraphPage(); break;
        case 7: _t->applyStyleSheet(); break;
        case 8: _t->chooseEGlineColor(); break;
        case 9: _t->resetEulerGraphScore(); break;
        case 10: _t->changeEGMagnetMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->EGStepedUp((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        case 12: _t->setNextEulerGraph(); break;
        case 13: _t->EGstartChallenge(); break;
        case 14: _t->translateInstructions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::EGlineColorRequest)) {
                *result = 0;
                return;
            }
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
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint, std::false_type>, QtPrivate::TypeAndForceComplete<uint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::EGlineColorRequest(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
