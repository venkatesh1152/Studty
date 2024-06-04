#ifndef SETTINGCLASS_H
#define SETTINGCLASS_H

#include <QObject>

class settingClass : public QObject
{
    Q_OBJECT
public:
    explicit settingClass(QObject *parent = nullptr);

signals:
};

#endif // SETTINGCLASS_H
