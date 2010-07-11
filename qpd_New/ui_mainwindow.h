/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sat Feb 6 05:25:23 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>
#include <qpd_sockwidg.h>

QT_BEGIN_NAMESPACE

class Ui_qpd_MainWindow
{
public:
    QWidget *centralWidget;
    qpd_SockWidg *_qpd_SockWidg;
    QGroupBox *groupBox;
    QComboBox *comboBox;

    void setupUi(QMainWindow *qpd_MainWindow)
    {
        if (qpd_MainWindow->objectName().isEmpty())
            qpd_MainWindow->setObjectName(QString::fromUtf8("qpd_MainWindow"));
        qpd_MainWindow->setEnabled(true);
        qpd_MainWindow->resize(600, 400);
        qpd_MainWindow->setMinimumSize(QSize(0, 0));
        qpd_MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        qpd_MainWindow->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        qpd_MainWindow->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        qpd_MainWindow->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
        centralWidget = new QWidget(qpd_MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        _qpd_SockWidg = new qpd_SockWidg(centralWidget);
        _qpd_SockWidg->setObjectName(QString::fromUtf8("_qpd_SockWidg"));
        _qpd_SockWidg->setEnabled(true);
        _qpd_SockWidg->setGeometry(QRect(0, 0, 320, 40));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(_qpd_SockWidg->sizePolicy().hasHeightForWidth());
        _qpd_SockWidg->setSizePolicy(sizePolicy);
        _qpd_SockWidg->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 581, 361));
        groupBox->setCursor(QCursor(Qt::ArrowCursor));
        groupBox->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(430, 5, 161, 21));
        comboBox->setLayoutDirection(Qt::RightToLeft);
        qpd_MainWindow->setCentralWidget(centralWidget);

        retranslateUi(qpd_MainWindow);
        QObject::connect(qpd_MainWindow, SIGNAL(_qpd_new(QString)), _qpd_SockWidg, SLOT(qpd_tcp_w(QString)));

        QMetaObject::connectSlotsByName(qpd_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *qpd_MainWindow)
    {
        qpd_MainWindow->setWindowTitle(QApplication::translate("qpd_MainWindow", "Qt Pure Data interface", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("qpd_MainWindow", "Control Surface Title", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(qpd_MainWindow);
    } // retranslateUi

};

namespace Ui {
    class qpd_MainWindow: public Ui_qpd_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
