/****************************************************************************
** Meta object code from reading C++ file 'qpd_sockwidg.h'
**
** Created: Thu Apr 22 22:57:24 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qpd_sockwidg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpd_sockwidg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qpd_SockWidg[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      29,   13,   13,   13, 0x0a,
      48,   41,   13,   13, 0x0a,
      77,   67,   13,   13, 0x08,
     120,   13,   13,   13, 0x08,
     143,   13,   13,   13, 0x08,
     171,   13,   13,   13, 0x08,
     198,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qpd_SockWidg[] = {
    "qpd_SockWidg\0\0qpd_tcp_sock()\0qpd_hello()\0"
    "_qpd_m\0qpd_tcp_w(QString)\0_err_sock\0"
    "displayError(QAbstractSocket::SocketError)\0"
    "disableConnectButton()\0"
    "connectionControlsDisable()\0"
    "connectionControlsEnable()\0qpd_tcp_c()\0"
};

const QMetaObject qpd_SockWidg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qpd_SockWidg,
      qt_meta_data_qpd_SockWidg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qpd_SockWidg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qpd_SockWidg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qpd_SockWidg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qpd_SockWidg))
        return static_cast<void*>(const_cast< qpd_SockWidg*>(this));
    return QWidget::qt_metacast(_clname);
}

int qpd_SockWidg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: qpd_tcp_sock(); break;
        case 1: qpd_hello(); break;
        case 2: qpd_tcp_w((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: disableConnectButton(); break;
        case 5: connectionControlsDisable(); break;
        case 6: connectionControlsEnable(); break;
        case 7: qpd_tcp_c(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
