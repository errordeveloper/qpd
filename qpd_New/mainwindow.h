#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

namespace Ui
{
    class qpd_MainWindow;
}

class qpd_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    qpd_MainWindow(QWidget *parent = 0);
    ~qpd_MainWindow();

private:
    Ui::qpd_MainWindow *ui;

    QString _qpd_m;

private slots:

    void _qpd_set(QString _N);

signals:
    void _qpd_new(QString _M);
};

#endif // MAINWINDOW_H
