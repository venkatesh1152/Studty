#include <QCoreApplication>
#include <qsettings.h>
#include "viewcalssbytearray.h"
#include "viewclassqstring.h"



// To the use of Q_ByteArrayView
void viewQbytearray(){
    viewCalssbytearray *obj = new viewCalssbytearray();
    QByteArrayView viewObj = obj->showInfo();
    qInfo()<<"Info : "<<viewObj;
    obj->destroyed();
}
// To the use of QStringView
void viewQstring(){
    viewClassQstring *obj = new viewClassQstring();
    QStringView viewobj = obj->viewInfo();
    qInfo()<<"String Info "<<viewobj;
    obj->destroyed();
}
//used to save the data in setting
void saveSetting (QSettings &obj){
    obj.setValue("name","I am vvv");
}
//used to view the data in setting
void viewSetting(QSettings &obj){
    qInfo()<< obj.fileName();
    QVariant val = obj.value("name",QVariant());
    qInfo()<<"Return Value = "<< val.toString();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*************
    viewQbytearray();
    viewQstring();
    *************/

    /******QSetting Example
    QCoreApplication::setOrganizationName("vvv_Organization");
    QCoreApplication::setOrganizationDomain("VVV_domine");
    QCoreApplication::setApplicationName("Qobject_study");

    QSettings setting;

    if(setting.allKeys().isEmpty()){
        qInfo()<<"It is empty";
        saveSetting(setting);
    } else {
        qInfo()<<"It is not empty";
        viewSetting(setting);
    }
    **********************/


    return a.exec();
}
