#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QRandomGenerator>

class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    int count();
    void close();
    int ID();

    QString message() const;
    void setMessage(const QString &message);

signals:
    void changed();

public slots:
    void disconnected();
    void readRead();




    // QTcpServer interface
protected:
    void incomingConnection(qintptr handle);

private:
    QString m_message;
    QList<QTcpSocket*> m_list;
    int m_id=1;

    int generateId();
    int getClientId(QTcpSocket *socket);
};

#endif // SERVER_H
