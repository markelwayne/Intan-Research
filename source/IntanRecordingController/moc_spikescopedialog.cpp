/****************************************************************************
** Meta object code from reading C++ file 'spikescopedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spikescopedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spikescopedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpikeScopeDialog_t {
    QByteArrayData data[13];
    char stringdata[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SpikeScopeDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SpikeScopeDialog_t qt_meta_stringdata_SpikeScopeDialog = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 12),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 5),
QT_MOC_LITERAL(4, 37, 14),
QT_MOC_LITERAL(5, 52, 20),
QT_MOC_LITERAL(6, 73, 12),
QT_MOC_LITERAL(7, 86, 10),
QT_MOC_LITERAL(8, 97, 15),
QT_MOC_LITERAL(9, 113, 19),
QT_MOC_LITERAL(10, 133, 5),
QT_MOC_LITERAL(11, 139, 15),
QT_MOC_LITERAL(12, 155, 10)
    },
    "SpikeScopeDialog\0changeYScale\0\0index\0"
    "setTriggerType\0resetThresholdToZero\0"
    "setNumSpikes\0clearScope\0setDigitalInput\0"
    "setVoltageThreshold\0value\0setEdgePolarity\0"
    "applyToAll\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpikeScopeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08,
       4,    1,   62,    2, 0x08,
       5,    0,   65,    2, 0x08,
       6,    1,   66,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    1,   70,    2, 0x08,
       9,    1,   73,    2, 0x08,
      11,    1,   76,    2, 0x08,
      12,    0,   79,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void SpikeScopeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpikeScopeDialog *_t = static_cast<SpikeScopeDialog *>(_o);
        switch (_id) {
        case 0: _t->changeYScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setTriggerType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->resetThresholdToZero(); break;
        case 3: _t->setNumSpikes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clearScope(); break;
        case 5: _t->setDigitalInput((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setVoltageThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setEdgePolarity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->applyToAll(); break;
        default: ;
        }
    }
}

const QMetaObject SpikeScopeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SpikeScopeDialog.data,
      qt_meta_data_SpikeScopeDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SpikeScopeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpikeScopeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpikeScopeDialog.stringdata))
        return static_cast<void*>(const_cast< SpikeScopeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SpikeScopeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
