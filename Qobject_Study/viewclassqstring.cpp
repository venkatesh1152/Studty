#include "viewclassqstring.h"

viewClassQstring::viewClassQstring(QObject *parent)
    : QObject{parent}
{
    info_m = "I am VVV";
}

    QStringView viewClassQstring::viewInfo()
{
    QStringView viewobj(info_m);
    return viewobj;
}
