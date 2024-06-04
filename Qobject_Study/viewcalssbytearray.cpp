#include "viewcalssbytearray.h"

viewCalssbytearray::viewCalssbytearray(QObject *parent)
    : QObject{parent}
{
    m_info = ("Hello VVV");
}

QByteArrayView viewCalssbytearray::showInfo()
{
    QByteArrayView viewObj(m_info);
    return viewObj;
}
