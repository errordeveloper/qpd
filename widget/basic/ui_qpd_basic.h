/********************************************************************************
** Form generated from reading ui file 'qpd_sockwidg.ui'
**
** Created: Mon Nov 16 23:04:54 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QPD_SOCKWIDG_H
#define UI_QPD_SOCKWIDG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qpd_SockWidg
{
public:
    QLineEdit *lineEdit;

    void setupUi(QWidget *qpd_SockWidg)
    {
        if (qpd_SockWidg->objectName().isEmpty())
            qpd_SockWidg->setObjectName(QString::fromUtf8("qpd_SockWidg"));
        qpd_SockWidg->resize(345, 96);
        lineEdit = new QLineEdit(qpd_SockWidg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(4, 68, 127, 25));

        retranslateUi(qpd_SockWidg);

        QMetaObject::connectSlotsByName(qpd_SockWidg);
    } // setupUi

    void retranslateUi(QWidget *qpd_SockWidg)
    {
        qpd_SockWidg->setWindowTitle(QApplication::translate("qpd_SockWidg", "qpd_SockWidg", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(qpd_SockWidg);
    } // retranslateUi

};

namespace Ui {
    class qpd_SockWidg: public Ui_qpd_SockWidg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPD_SOCKWIDG_H
