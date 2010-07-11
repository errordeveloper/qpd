#include "mainwindow.h"
#include "ui_mainwindow.h"

// #include "iostream"

qpd_MainWindow::qpd_MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::qpd_MainWindow)
{
    ui->setupUi(this);
}

qpd_MainWindow::~qpd_MainWindow()
{
    delete ui;
}

void qpd_MainWindow::_qpd_set(QString _new_m)
{
    _qpd_m.clear();
    _qpd_m.append(_new_m);
    emit _qpd_new(_new_m);
}


// EXAMPLES ::

/* horizontalSlider EXAMPLE:
void qpd_MainWindow::on_horizontalSlider_valueChanged(int value)
{
    QString _qpd_m = QString::number(value);
    _qpd_m.prepend("horizontal_slider ");
    _qpd_set(_qpd_m);

    return;

}*/

/* doubleSpinBox EXAMPLE:
void qpd_MainWindow::on_doubleSpinBox_valueChanged(QString value)
{
    value.prepend("double_spin_box ");
    _qpd_set(value);

    return;

}*/

/* Knob EXAMPLE:
void qpd_MainWindow::on_Knob_valueChanged(double value)
{
    QString _qpd_m = QString::number(value);
    _qpd_m.prepend("qwt_knob ");
    _qpd_set(_qpd_m);

    return;

}*/

/* float scaled verticalSlider EXAMPLE:
void qpd_MainWindow::on_verticalSlider_valueChanged(int position)
{
    // SCALING to float here ::


    float _s =0.000001;
        _s *= position;


        QString _qpd_m = QString::number(_s);
        _qpd_m.prepend("vertical_slider ");
        _qpd_set(_qpd_m);

        // can we just do this
        //_qpd_set(QString::prepend(QString::number(_s)));

}*/
