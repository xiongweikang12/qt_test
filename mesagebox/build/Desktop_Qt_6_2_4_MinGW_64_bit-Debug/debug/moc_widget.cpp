/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    const uint offsetsAndSize[30];
    char stringdata0[426];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 6), // "Widget"
QT_MOC_LITERAL(7, 30), // "on_pushButton_openfile_clicked"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 31), // "on_pushButton_openfiles_clicked"
QT_MOC_LITERAL(71, 31), // "on_pushButton_choosedir_clicked"
QT_MOC_LITERAL(103, 30), // "on_pushButton_savefile_clicked"
QT_MOC_LITERAL(134, 33), // "on_pushButton_choosecolor_cli..."
QT_MOC_LITERAL(168, 32), // "on_pushButton_choosefont_clicked"
QT_MOC_LITERAL(201, 29), // "on_pushButton_process_clicked"
QT_MOC_LITERAL(231, 33), // "on_pushButton_inputString_cli..."
QT_MOC_LITERAL(265, 34), // "on_pushButton_clearcontent_cl..."
QT_MOC_LITERAL(300, 30), // "on_pushButton_inputInt_clicked"
QT_MOC_LITERAL(331, 30), // "on_pushButton_question_clicked"
QT_MOC_LITERAL(362, 33), // "on_pushButton_chooseItems_cli..."
QT_MOC_LITERAL(396, 29) // "on_pushButton_warning_clicked"

    },
    "Widget\0on_pushButton_openfile_clicked\0"
    "\0on_pushButton_openfiles_clicked\0"
    "on_pushButton_choosedir_clicked\0"
    "on_pushButton_savefile_clicked\0"
    "on_pushButton_choosecolor_clicked\0"
    "on_pushButton_choosefont_clicked\0"
    "on_pushButton_process_clicked\0"
    "on_pushButton_inputString_clicked\0"
    "on_pushButton_clearcontent_clicked\0"
    "on_pushButton_inputInt_clicked\0"
    "on_pushButton_question_clicked\0"
    "on_pushButton_chooseItems_clicked\0"
    "on_pushButton_warning_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    0,   99,    2, 0x08,    8 /* Private */,
      10,    0,  100,    2, 0x08,    9 /* Private */,
      11,    0,  101,    2, 0x08,   10 /* Private */,
      12,    0,  102,    2, 0x08,   11 /* Private */,
      13,    0,  103,    2, 0x08,   12 /* Private */,
      14,    0,  104,    2, 0x08,   13 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_openfile_clicked(); break;
        case 1: _t->on_pushButton_openfiles_clicked(); break;
        case 2: _t->on_pushButton_choosedir_clicked(); break;
        case 3: _t->on_pushButton_savefile_clicked(); break;
        case 4: _t->on_pushButton_choosecolor_clicked(); break;
        case 5: _t->on_pushButton_choosefont_clicked(); break;
        case 6: _t->on_pushButton_process_clicked(); break;
        case 7: _t->on_pushButton_inputString_clicked(); break;
        case 8: _t->on_pushButton_clearcontent_clicked(); break;
        case 9: _t->on_pushButton_inputInt_clicked(); break;
        case 10: _t->on_pushButton_question_clicked(); break;
        case 11: _t->on_pushButton_chooseItems_clicked(); break;
        case 12: _t->on_pushButton_warning_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.offsetsAndSize,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Widget_t
, QtPrivate::TypeAndForceComplete<Widget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
