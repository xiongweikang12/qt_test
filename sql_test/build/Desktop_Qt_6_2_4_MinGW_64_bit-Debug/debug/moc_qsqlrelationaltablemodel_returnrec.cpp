/****************************************************************************
** Meta object code from reading C++ file 'qsqlrelationaltablemodel_returnrec.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qsqlrelationaltablemodel_returnrec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsqlrelationaltablemodel_returnrec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSqlRelationalTableModel_returnrec_t {
    const uint offsetsAndSize[18];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QSqlRelationalTableModel_returnrec_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QSqlRelationalTableModel_returnrec_t qt_meta_stringdata_QSqlRelationalTableModel_returnrec = {
    {
QT_MOC_LITERAL(0, 34), // "QSqlRelationalTableModel_retu..."
QT_MOC_LITERAL(35, 10), // "rec_return"
QT_MOC_LITERAL(46, 0), // ""
QT_MOC_LITERAL(47, 10), // "QSqlRecord"
QT_MOC_LITERAL(58, 3), // "rec"
QT_MOC_LITERAL(62, 13), // "do_return_rec"
QT_MOC_LITERAL(76, 11), // "QModelIndex"
QT_MOC_LITERAL(88, 5), // "index"
QT_MOC_LITERAL(94, 14) // "refresh_change"

    },
    "QSqlRelationalTableModel_returnrec\0"
    "rec_return\0\0QSqlRecord\0rec\0do_return_rec\0"
    "QModelIndex\0index\0refresh_change"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSqlRelationalTableModel_returnrec[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   35,    2, 0x0a,    3 /* Public */,
       8,    0,   38,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void QSqlRelationalTableModel_returnrec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSqlRelationalTableModel_returnrec *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rec_return((*reinterpret_cast< std::add_pointer_t<QSqlRecord>>(_a[1]))); break;
        case 1: _t->do_return_rec((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->refresh_change(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSqlRelationalTableModel_returnrec::*)(QSqlRecord );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSqlRelationalTableModel_returnrec::rec_return)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QSqlRelationalTableModel_returnrec::staticMetaObject = { {
    QMetaObject::SuperData::link<QSqlRelationalTableModel::staticMetaObject>(),
    qt_meta_stringdata_QSqlRelationalTableModel_returnrec.offsetsAndSize,
    qt_meta_data_QSqlRelationalTableModel_returnrec,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QSqlRelationalTableModel_returnrec_t
, QtPrivate::TypeAndForceComplete<QSqlRelationalTableModel_returnrec, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlRecord, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QSqlRelationalTableModel_returnrec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSqlRelationalTableModel_returnrec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSqlRelationalTableModel_returnrec.stringdata0))
        return static_cast<void*>(this);
    return QSqlRelationalTableModel::qt_metacast(_clname);
}

int QSqlRelationalTableModel_returnrec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlRelationalTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QSqlRelationalTableModel_returnrec::rec_return(QSqlRecord _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
