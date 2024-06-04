#ifndef VIEWCALSSBYTEARRAY_H
#define VIEWCALSSBYTEARRAY_H

#include <QObject>
#include <QDebug>

class viewCalssbytearray : public QObject
{
    Q_OBJECT
public:
    explicit viewCalssbytearray(QObject *parent = nullptr);

    QByteArrayView showInfo ();

signals:

private:
    QByteArray m_info;
};

#endif // VIEWCALSSBYTEARRAY_H
