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
    obj.beginGroup("Hello");
    obj.setValue("Key1","value1");
    obj.setValue("key2",1);
    obj.endGroup();
}
//used to view the data in setting
void viewSetting(QSettings &obj){
    QVariant val = obj.value("name",QVariant());
    qInfo()<<"Return Value = "<< val.toString();

    obj.beginGroup("Hello");
    int val2 = obj.value("key2").toInt();
    qInfo()<<"Return Value = "<< val2;
    obj.endGroup();
}

void saveAge(QSettings *setting,QString group,QString name, int age)
{
    setting->beginGroup(group);
    setting->setValue(name,age);
    setting->endGroup();
}

int getAge(QSettings *setting, QString group, QString name)
{
    setting->beginGroup(group);

    if(!setting->contains(name))
    {
        qWarning() << "Does not contain " << name << " in " << group;
        setting->endGroup();
        return 0;
    }

    bool ok;
    int value = setting->value(name).toInt(&ok);
    setting->endGroup();

    if(!ok)
    {
        qWarning() << "Could not convert to int";
        return 0;
    }

    return value;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*************
    viewQbytearray();
    viewQstring();
    *************/

    //******QSetting Example
    QCoreApplication::setOrganizationName("vvv_Organization");
    QCoreApplication::setOrganizationDomain("VVV_domine");
    QCoreApplication::setApplicationName("Qobject_study");

    QSettings setting;

    if(setting.allKeys().isEmpty()){
        qInfo()<<"It is empty";
        saveSetting(setting);
        saveAge(&setting,"people","Bryan",44);
        saveAge(&setting,"beer","twoheart",1);
        saveAge(&setting,"beer","Bryan",11);
    } else {
        qInfo()<<"It is not empty";
        viewSetting(setting);
        qInfo() << "TwoHeart" << getAge(&setting,"beer","twoheart");
        qInfo() << "Bryan (people)" << getAge(&setting,"people","Bryan");
        qInfo() << "Bryan (beer)" << getAge(&setting,"beer","Bryan");
    }
    //**********************/


    return a.exec();
}
