#ifndef UDPHELPER_H
#define UDPHELPER_H

#include <QObject>

class UdpHelper : public QObject
{
    Q_OBJECT
public:
    explicit UdpHelper(QObject *parent = 0);

signals:

public slots:
};

#endif // UDPHELPER_H