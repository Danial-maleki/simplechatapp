#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QMessageBox>
#include <QStringList>
#include <QStringListModel>
#include <QAbstractSocket>
#include <QRandomGenerator>
#include <QInputDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();//btn connect
    void on_pushButton_2_clicked();//btn disconnect
    void on_btnSend_clicked();//btn send
    void connected();
    void disconnected();
    void readyread();
    void error(QAbstractSocket::SocketError socketError);


private:
    Ui::MainWindow *ui;
    QTcpSocket m_socket;
    QStringList m_list;
    QStringListModel m_model;
    QString m_name;
};
#endif // MAINWINDOW_H
