#ifndef TCPSENDER_H
#define TCPSENDER_H

#include <QObject>

class TcpSender : public QObject
{
    Q_OBJECT
public:
    explicit TcpSender(QObject *parent = 0);

signals:

public slots:
};

#endif // TCPSENDER_H