#ifndef QBYTEARRAYVIEW_H
#define QBYTEARRAYVIEW_H

#include <QObject>

class qbyteArrayView : public QObject
{
    Q_OBJECT
public:
    explicit qbyteArrayView(QObject *parent = nullptr);

signals:
};

#endif // QBYTEARRAYVIEW_H
