#ifndef QPD_BASIC_H
#define QPD_BASIC_H


#include <QtCore/QObject>
#include <QtGui/QWidget>
#include <QtGui/QDialog>
#include <QtNetwork/QTcpSocket>

#include <QtDesigner/QDesignerExportWidget>

QT_BEGIN_NAMESPACE
class QLabel;
class QSpinBox;
class QCheckBox;
class QLineEdit;
class QPushButton;
class QDialogButtonBox;
class QTcpSocket;
QT_END_NAMESPACE


// namespace Ui
// {
//     class qpd_basic;
// }


class QDESIGNER_WIDGET_EXPORT qpd_basic : public QWidget
{
    Q_OBJECT

public:
    qpd_basic(QWidget *parent = 0);
    ~qpd_basic();

public slots:
    void qpd_tcp_sock(); // init socket;
    void qpd_hello(); // write msg;
    void qpd_tcp_w(QString _qpd_m);

private slots:
    void displayError(QAbstractSocket::SocketError _err_sock);
    void disableConnectButton();
    void connectionControlsDisable();
    void connectionControlsEnable();
    void qpd_tcp_c(); // close socket;

private:
    // Ui::qpd_basic *ui;

    QLineEdit *pd_host_LineEdit;    QLabel *_put_col;
    QSpinBox *pd_port_SpinBox;      QCheckBox *_connectionCheckBox;
    QPushButton *connectButton;
    QDialogButtonBox *buttonBox;

    //QString connectButton_msg_1; // connection on
    //QString connectButton_msg_0; // no connection

    QTcpSocket *qpd_Sock;
    //QString *qpd_msg_s;
    quint16 blockSize;
};

#endif // QPD_BASIC_H
