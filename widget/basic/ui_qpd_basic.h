/********************************************************************************
** Form generated from reading ui file 'qpd_basic.ui'
**
** Created: Mon Nov 16 23:04:54 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QPD_BASIC_H
#define UI_QPD_BASIC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qpd_basic
{
public:
    QLineEdit *lineEdit;

    void setupUi(QWidget *qpd_basic)
    {
        if (qpd_basic->objectName().isEmpty())
            qpd_basic->setObjectName(QString::fromUtf8("qpd_basic"));
        qpd_basic->resize(345, 96);
        lineEdit = new QLineEdit(qpd_basic);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(4, 68, 127, 25));

        retranslateUi(qpd_basic);

        QMetaObject::connectSlotsByName(qpd_basic);
    } // setupUi

    void retranslateUi(QWidget *qpd_basic)
    {
        qpd_basic->setWindowTitle(QApplication::translate("qpd_basic", "qpd_basic", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(qpd_basic);
    } // retranslateUi

};

namespace Ui {
    class qpd_basic: public Ui_qpd_basic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPD_BASIC_H
