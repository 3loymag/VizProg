/****************************************************************************
** Meta object code from reading C++ file 'printerpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../shopy(26.11.2023)/printerpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printerpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrinterPage_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrinterPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrinterPage_t qt_meta_stringdata_PrinterPage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PrinterPage"
QT_MOC_LITERAL(1, 12, 17), // "restoreCountStore"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(4, 49, 13), // "itemsToRemove"
QT_MOC_LITERAL(5, 63, 10), // "buyPrinter"
QT_MOC_LITERAL(6, 74, 5), // "index"
QT_MOC_LITERAL(7, 80, 19) // "onCartButtonClicked"

    },
    "PrinterPage\0restoreCountStore\0\0"
    "QMap<QString,int>\0itemsToRemove\0"
    "buyPrinter\0index\0onCartButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrinterPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x08 /* Private */,
       7,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void PrinterPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PrinterPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->restoreCountStore((*reinterpret_cast< const QMap<QString,int>(*)>(_a[1]))); break;
        case 1: _t->buyPrinter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onCartButtonClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PrinterPage::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_PrinterPage.data,
    qt_meta_data_PrinterPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PrinterPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrinterPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrinterPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PrinterPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
