#include "database.h"

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QVariant>

database::database()
{

}

bool database::setupConnection()
{
    tempVal = 0;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("7IH7@A7d");
    db.setDatabaseName("fun4all");
    db.setPort(3306);

    if(db.open())
    {
        QSqlQuery q = db.exec("SELECT studentnr FROM student LIMIT 1");
        tempVal = q.value(0).toInt();
        return 1;
    }
    return 0;
}

int database::getTempVal()
{
    return tempVal;
}
