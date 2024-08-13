/****************************************************************************
** Meta object code from reading C++ file 'insert_window.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../insert_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'insert_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Insert_window_t {
    const uint offsetsAndSize[38];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Insert_window_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Insert_window_t qt_meta_stringdata_Insert_window = {
    {
QT_MOC_LITERAL(0, 13), // "Insert_window"
QT_MOC_LITERAL(14, 17), // "set_spinbox_sigal"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 11), // "QModelIndex"
QT_MOC_LITERAL(45, 5), // "index"
QT_MOC_LITERAL(51, 26), // "on_actionsetsize_triggered"
QT_MOC_LITERAL(78, 28), // "on_actionsetheader_triggered"
QT_MOC_LITERAL(107, 18), // "size_dialog_noable"
QT_MOC_LITERAL(126, 18), // "size_dialog_isable"
QT_MOC_LITERAL(145, 15), // "set_colrow_slot"
QT_MOC_LITERAL(161, 3), // "col"
QT_MOC_LITERAL(165, 3), // "row"
QT_MOC_LITERAL(169, 26), // "on_actionsetitem_triggered"
QT_MOC_LITERAL(196, 16), // "set_item_bysigal"
QT_MOC_LITERAL(213, 11), // "col_current"
QT_MOC_LITERAL(225, 11), // "row_current"
QT_MOC_LITERAL(237, 8), // "QString&"
QT_MOC_LITERAL(246, 9), // "text_temp"
QT_MOC_LITERAL(256, 20) // "on_tableView_clicked"

    },
    "Insert_window\0set_spinbox_sigal\0\0"
    "QModelIndex\0index\0on_actionsetsize_triggered\0"
    "on_actionsetheader_triggered\0"
    "size_dialog_noable\0size_dialog_isable\0"
    "set_colrow_slot\0col\0row\0"
    "on_actionsetitem_triggered\0set_item_bysigal\0"
    "col_current\0row_current\0QString&\0"
    "text_temp\0on_tableView_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Insert_window[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   71,    2, 0x08,    3 /* Private */,
       6,    0,   72,    2, 0x08,    4 /* Private */,
       7,    0,   73,    2, 0x08,    5 /* Private */,
       8,    0,   74,    2, 0x08,    6 /* Private */,
       9,    2,   75,    2, 0x08,    7 /* Private */,
      12,    0,   80,    2, 0x08,   10 /* Private */,
      13,    3,   81,    2, 0x08,   11 /* Private */,
      18,    1,   88,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 16,   14,   15,   17,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Insert_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Insert_window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_spinbox_sigal((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->on_actionsetsize_triggered(); break;
        case 2: _t->on_actionsetheader_triggered(); break;
        case 3: _t->size_dialog_noable(); break;
        case 4: _t->size_dialog_isable(); break;
        case 5: _t->set_colrow_slot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->on_actionsetitem_triggered(); break;
        case 7: _t->set_item_bysigal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[3]))); break;
        case 8: _t->on_tableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Insert_window::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Insert_window::set_spinbox_sigal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Insert_window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Insert_window.offsetsAndSize,
    qt_meta_data_Insert_window,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Insert_window_t
, QtPrivate::TypeAndForceComplete<Insert_window, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Insert_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Insert_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Insert_window.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Insert_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Insert_window::set_spinbox_sigal(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
