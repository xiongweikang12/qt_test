/****************************************************************************
** Meta object code from reading C++ file 'select_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../select_mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'select_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Select_MainWindow_t {
    const uint offsetsAndSize[52];
    char stringdata0[423];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Select_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Select_MainWindow_t qt_meta_stringdata_Select_MainWindow = {
    {
QT_MOC_LITERAL(0, 17), // "Select_MainWindow"
QT_MOC_LITERAL(18, 13), // "tell_tochange"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 26), // "on_actionopensql_triggered"
QT_MOC_LITERAL(60, 19), // "do_currentrowchange"
QT_MOC_LITERAL(80, 11), // "QModelIndex"
QT_MOC_LITERAL(92, 3), // "cur"
QT_MOC_LITERAL(96, 3), // "pre"
QT_MOC_LITERAL(100, 30), // "on_tabWidget_tabCloseRequested"
QT_MOC_LITERAL(131, 5), // "index"
QT_MOC_LITERAL(137, 30), // "on_actionfirstrecord_triggered"
QT_MOC_LITERAL(168, 32), // "on_actionbefore_record_triggered"
QT_MOC_LITERAL(201, 30), // "on_actionnext_record_triggered"
QT_MOC_LITERAL(232, 30), // "on_actionlast_record_triggered"
QT_MOC_LITERAL(263, 16), // "do_updata_record"
QT_MOC_LITERAL(280, 9), // "index_tap"
QT_MOC_LITERAL(290, 8), // "info_row"
QT_MOC_LITERAL(299, 10), // "QSqlRecord"
QT_MOC_LITERAL(310, 5), // "rec_t"
QT_MOC_LITERAL(316, 30), // "on_actionopenratesql_triggered"
QT_MOC_LITERAL(347, 16), // "do_set_sqlconfig"
QT_MOC_LITERAL(364, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(386, 4), // "info"
QT_MOC_LITERAL(391, 12), // "do_print_rec"
QT_MOC_LITERAL(404, 3), // "rec"
QT_MOC_LITERAL(408, 14) // "do_change_rate"

    },
    "Select_MainWindow\0tell_tochange\0\0"
    "on_actionopensql_triggered\0"
    "do_currentrowchange\0QModelIndex\0cur\0"
    "pre\0on_tabWidget_tabCloseRequested\0"
    "index\0on_actionfirstrecord_triggered\0"
    "on_actionbefore_record_triggered\0"
    "on_actionnext_record_triggered\0"
    "on_actionlast_record_triggered\0"
    "do_updata_record\0index_tap\0info_row\0"
    "QSqlRecord\0rec_t\0on_actionopenratesql_triggered\0"
    "do_set_sqlconfig\0QMap<QString,QString>\0"
    "info\0do_print_rec\0rec\0do_change_rate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Select_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    2,   94,    2, 0x08,    3 /* Private */,
       8,    1,   99,    2, 0x08,    6 /* Private */,
      10,    0,  102,    2, 0x08,    8 /* Private */,
      11,    0,  103,    2, 0x08,    9 /* Private */,
      12,    0,  104,    2, 0x08,   10 /* Private */,
      13,    0,  105,    2, 0x08,   11 /* Private */,
      14,    3,  106,    2, 0x08,   12 /* Private */,
      19,    0,  113,    2, 0x08,   16 /* Private */,
      20,    1,  114,    2, 0x08,   17 /* Private */,
      23,    1,  117,    2, 0x08,   19 /* Private */,
      25,    0,  120,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 17,   15,   16,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 17,   24,
    QMetaType::Void,

       0        // eod
};

void Select_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Select_MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tell_tochange(); break;
        case 1: _t->on_actionopensql_triggered(); break;
        case 2: _t->do_currentrowchange((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 3: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_actionfirstrecord_triggered(); break;
        case 5: _t->on_actionbefore_record_triggered(); break;
        case 6: _t->on_actionnext_record_triggered(); break;
        case 7: _t->on_actionlast_record_triggered(); break;
        case 8: _t->do_updata_record((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSqlRecord>>(_a[3]))); break;
        case 9: _t->on_actionopenratesql_triggered(); break;
        case 10: _t->do_set_sqlconfig((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[1]))); break;
        case 11: _t->do_print_rec((*reinterpret_cast< std::add_pointer_t<QSqlRecord>>(_a[1]))); break;
        case 12: _t->do_change_rate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Select_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Select_MainWindow::tell_tochange)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Select_MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Select_MainWindow.offsetsAndSize,
    qt_meta_data_Select_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Select_MainWindow_t
, QtPrivate::TypeAndForceComplete<Select_MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlRecord, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMap<QString,QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlRecord, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Select_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Select_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Select_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Select_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Select_MainWindow::tell_tochange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
