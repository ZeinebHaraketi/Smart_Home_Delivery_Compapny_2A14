/****************************************************************************
** Meta object code from reading C++ file 'afficherperso.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Smart_Home_Delivery_Compapny_2A14-master/afficherperso.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'afficherperso.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_afficherperso_t {
    QByteArrayData data[15];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_afficherperso_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_afficherperso_t qt_meta_stringdata_afficherperso = {
    {
QT_MOC_LITERAL(0, 0, 13), // "afficherperso"
QT_MOC_LITERAL(1, 14, 28), // "on_commandLinkButton_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 21), // "on_supp_perso_clicked"
QT_MOC_LITERAL(4, 66, 24), // "on_selectidperso_clicked"
QT_MOC_LITERAL(5, 91, 20), // "on_miseajour_clicked"
QT_MOC_LITERAL(6, 112, 18), // "on_pdfbutt_clicked"
QT_MOC_LITERAL(7, 131, 19), // "on_imprbutt_clicked"
QT_MOC_LITERAL(8, 151, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(9, 173, 4), // "arg1"
QT_MOC_LITERAL(10, 178, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(11, 200, 23), // "on_supp_perso_4_clicked"
QT_MOC_LITERAL(12, 224, 22), // "on_miseajour_4_clicked"
QT_MOC_LITERAL(13, 247, 26), // "on_selectidperso_4_clicked"
QT_MOC_LITERAL(14, 274, 23) // "on_comboBox_4_activated"

    },
    "afficherperso\0on_commandLinkButton_clicked\0"
    "\0on_supp_perso_clicked\0on_selectidperso_clicked\0"
    "on_miseajour_clicked\0on_pdfbutt_clicked\0"
    "on_imprbutt_clicked\0on_comboBox_activated\0"
    "arg1\0on_pushButton_clicked\0"
    "on_supp_perso_4_clicked\0on_miseajour_4_clicked\0"
    "on_selectidperso_4_clicked\0"
    "on_comboBox_4_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_afficherperso[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void afficherperso::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        afficherperso *_t = static_cast<afficherperso *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        //case 0: _t->on_commandLinkButton_clicked(); break;
   //     case 1: _t->on_supp_perso_clicked(); break;
     //   case 2: _t->on_selectidperso_clicked(); break;
    //    case 3: _t->on_miseajour_clicked(); break;
        case 4: _t->on_pdfbutt_clicked(); break;
        case 5: _t->on_imprbutt_clicked(); break;
    //    case 6: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_supp_perso_4_clicked(); break;
        case 9: _t->on_miseajour_4_clicked(); break;
        case 10: _t->on_selectidperso_4_clicked(); break;
        case 11: _t->on_comboBox_4_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject afficherperso::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_afficherperso.data,
      qt_meta_data_afficherperso,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *afficherperso::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *afficherperso::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_afficherperso.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int afficherperso::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
