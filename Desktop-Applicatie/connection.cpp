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
#include <QtSql/QSqlError>

#include <QtDebug>
/*

Connection::Connection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");

    db.setUserName("newuser");
    db.setPassword("Admin_123");
    db.setDatabaseName("test");
    db.setPort(3306);

    if (db.open())
    {
        qDebug() << "Database opened.";
    }
    else
    {
        QSqlError err = db.lastError();
        qDebug() << "Failed to open database";
        qDebug() << err.databaseText();
        qDebug() << err.driverText();
        qDebug() << err.text();
    }
}

void Connection::test()
{

    QSqlQuery query("SELECT * FROM meetwaarden");

}




*/

