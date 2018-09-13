#include "connection.h"/*
#include <QCoreApplication>
#include <QtDebug>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/qsqldatabase.h>
#include <QtSql/QsqlQuery>
*/

#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

Connection::Connection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("WeerStation");
    db.setHostName("localhost");
    db.setDatabaseName("fun4all");
    db.setUserName("root");
    db.setPassword("admin");
    db.setPort(3306);
    db.setConnectOptions();
    bool ok = db.open();
}

void Connection::test()
{

}




/*QSqlDatabase db;
   db.database();
   /* db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("admin");
    db.setDatabaseName("fun4all");
    db.setPort(3306);
    db.setConnectOptions();
    if(db.open())
    {
        db.close();
    }*/

