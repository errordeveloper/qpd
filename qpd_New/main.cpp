#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qpd_MainWindow w;
    w.show();
    return a.exec();
}
