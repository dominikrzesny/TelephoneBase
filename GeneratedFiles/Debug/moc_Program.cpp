/****************************************************************************
** Meta object code from reading C++ file 'Program.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Program.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Program.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Program_t {
    QByteArrayData data[10];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Program_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Program_t qt_meta_stringdata_Program = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Program"
QT_MOC_LITERAL(1, 8, 12), // "dodajObiekty"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "dodajObiektyDoListy"
QT_MOC_LITERAL(4, 42, 18), // "czyszczenieVectora"
QT_MOC_LITERAL(5, 61, 12), // "wyswietlDane"
QT_MOC_LITERAL(6, 74, 13), // "wlaczPrzycisk"
QT_MOC_LITERAL(7, 88, 15), // "wyswietlObrazek"
QT_MOC_LITERAL(8, 104, 10), // "usunObiekt"
QT_MOC_LITERAL(9, 115, 6) // "zapisz"

    },
    "Program\0dodajObiekty\0\0dodajObiektyDoListy\0"
    "czyszczenieVectora\0wyswietlDane\0"
    "wlaczPrzycisk\0wyswietlObrazek\0usunObiekt\0"
    "zapisz"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Program[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Program::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Program *_t = static_cast<Program *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dodajObiekty(); break;
        case 1: _t->dodajObiektyDoListy(); break;
        case 2: _t->czyszczenieVectora(); break;
        case 3: _t->wyswietlDane(); break;
        case 4: _t->wlaczPrzycisk(); break;
        case 5: _t->wyswietlObrazek(); break;
        case 6: _t->usunObiekt(); break;
        case 7: _t->zapisz(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Program::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Program.data,
      qt_meta_data_Program,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Program::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Program::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Program.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Program::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
