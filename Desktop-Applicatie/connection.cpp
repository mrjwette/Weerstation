#include "connection.h"/*
#include <QCoreApplication>
#include <QtDebug>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/qsqldatabase.h>
#include <QtSql/QsqlQuery>
*/
#include <iostream>

#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

#include <QtDebug>


Connection::Connection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase( "QMYSQL" );
    db.setHostName("localhost");

    db.setUserName("root");
    db.setPassword("7IH7@A7d");
    db.setDatabaseName("fun4all");
    db.setPort(3306);
    db.setConnectOptions();
    if (db.open())
    {
        qDebug() << "Test";        
    }
    else
    {
        qDebug() << "Failed to open database";
    }
}

void Connection::test()
{

    QSqlQuery query("SELECT name FROM country");

}




/*QSqlDatabase db;
   db.database();
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("admin");
    db.setDatabaseName("fun4all");
    db.setPort(3306);
    db.setConnectOptions();
    if(db.open())
    {
        db.close();
    }*/

