#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lblID->setText("ID: Not Connected");

    connect(&m_socket,&QTcpSocket::connected,this,&MainWindow::connected);
    connect(&m_socket,&QTcpSocket::disconnected,this,&MainWindow::disconnected);
    connect(&m_socket,&QTcpSocket::readyRead,this,&MainWindow::readyread);
    connect(&m_socket,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&MainWindow::error);
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
    ui->btnSend->setEnabled(false);
    ui->listView->setModel(&m_model);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()//bton connect
{
    if(m_socket.isOpen()) m_socket.close();
    m_name = QInputDialog::getText(this,"Name","what`s your name",QLineEdit::EchoMode::Normal,m_name);
    bool ok;
    quint16 port = static_cast<quint16>(ui->lineEdit_2->text().toInt(&ok));
    if(!ok){
        QMessageBox::critical(this,"Error","Please enter a valid port number: ");

        return;
    }
    m_socket.connectToHost(ui->txtServer->text(),port);
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->btnSend->setEnabled(false);
    ui->lblID->setText("Connecting...");


    if(!m_socket.waitForConnected(3000)){
        on_pushButton_2_clicked();
        QMessageBox::critical(this,"Error","Could not connect to to server");
        ui->lblID->setText("ID: Connection Failed");
        return;

    }
}

void MainWindow::on_pushButton_2_clicked()//btn disconnect
{
    m_socket.close();

    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
    ui->btnSend->setEnabled(false);
    ui->lblID->setText("ID: Disconnected");
}

void MainWindow::on_btnSend_clicked()//btn send
{
    if(!m_socket.isOpen())return;

    QByteArray data;
    data.append(m_name);
    data.append(QString(" "));
    data.append(ui->txtMessage->text());

    m_socket.write(data);
    ui->txtMessage->setText(QString());

}

void MainWindow::connected()
{

    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
    ui->btnSend->setEnabled(true);
    int randomId = QRandomGenerator::global()->bounded(1000, 9999);
        ui->lblID->setText(QString("ID: %1").arg(randomId));
        m_list.append(QString("Connected! Your ID: %1").arg(randomId));
        m_model.setStringList(m_list);
    //ui->lblID->setText(QString("ID: %1").arg(m_socket.socketDescriptor()));
}

void MainWindow::disconnected()
{
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
    ui->btnSend->setEnabled(false);
    ui->lblID->setText("ID: Disconnected");
}

void MainWindow::readyread()
{
    QByteArray data=m_socket.readAll();
    QString message(data);
    m_list.append(message);
    m_model.setStringList(m_list);
    ui->listView->scrollToBottom();
    if(message.startsWith("ID: ")) {
         QString idStr = message.mid(3).trimmed();
         ui->lblID->setText(QString("ID: %1").arg(idStr));
         return;
         m_list.append(message);
            m_model.setStringList(m_list);
            ui->listView->scrollToBottom();
}

}
void MainWindow::error(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError)
    QMessageBox::critical(this,"ERROR",m_socket.errorString());
}
