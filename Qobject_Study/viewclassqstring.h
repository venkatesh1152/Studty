#ifndef VIEWCLASSQSTRING_H
#define VIEWCLASSQSTRING_H

#include <QObject>

class viewClassQstring : public QObject
{
    Q_OBJECT
public:
    explicit viewClassQstring(QObject *parent = nullptr);

    QStringView viewInfo();

signals:

private:
    QString info_m;
};

#endif // VIEWCLASSQSTRING_H
