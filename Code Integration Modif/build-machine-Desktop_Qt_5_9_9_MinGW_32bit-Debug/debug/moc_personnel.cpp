/****************************************************************************
** Meta object code from reading C++ file 'personnel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Code Integration + Hamdi/Smart_Home_Delivery_Compapny_2A14-master/personnel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'personnel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_personnel_t {
    QByteArrayData data[12];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_personnel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_personnel_t qt_meta_stringdata_personnel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "personnel"
QT_MOC_LITERAL(1, 10, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "arg1"
QT_MOC_LITERAL(4, 38, 21), // "on_imprbutt_2_clicked"
QT_MOC_LITERAL(5, 60, 20), // "on_pdfbutt_2_clicked"
QT_MOC_LITERAL(6, 81, 20), // "on_miseajour_clicked"
QT_MOC_LITERAL(7, 102, 21), // "on_supp_perso_clicked"
QT_MOC_LITERAL(8, 124, 24), // "on_selectidperso_clicked"
QT_MOC_LITERAL(9, 149, 20), // "on_Ajouterpo_clicked"
QT_MOC_LITERAL(10, 170, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(11, 192, 21) // "on_ajoutperso_clicked"

    },
    "personnel\0on_comboBox_activated\0\0arg1\0"
    "on_imprbutt_2_clicked\0on_pdfbutt_2_clicked\0"
    "on_miseajour_clicked\0on_supp_perso_clicked\0"
    "on_selectidperso_clicked\0on_Ajouterpo_clicked\0"
    "on_pushButton_clicked\0on_ajoutperso_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_personnel[] = {

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
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
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

void personnel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        personnel *_t = static_cast<personnel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_imprbutt_2_clicked(); break;
        case 2: _t->on_pdfbutt_2_clicked(); break;
        case 3: _t->on_miseajour_clicked(); break;
        case 4: _t->on_supp_perso_clicked(); break;
        case 5: _t->on_selectidperso_clicked(); break;
        case 6: _t->on_Ajouterpo_clicked(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_ajoutperso_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject personnel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_personnel.data,
      qt_meta_data_personnel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *personnel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *personnel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_personnel.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int personnel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
