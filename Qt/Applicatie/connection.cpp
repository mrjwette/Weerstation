#include "connection.h"
#include <QCoreApplication>
#include <QtDebug>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/qsqldatabase.h>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQueryModel>
#include <iostream>
#include <QtSql/QSqlTableModel>
#include <QTableView>
using namespace std;

Connection::Connection()
{
    ;
}

void Connection::test()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("databases.aii.avans.nl"); // Hostname, databases.aii.avans.nl of Localhost
    db.setPort(3306); // Port, Deze staat goed
    db.setUserName("mrjwette"); // gebruikersnaam, schoolnaam of naam niet je gebruikt bij het inloggen voor je localen database
    db.setPassword("Ab12345"); // Wachtwoord, Ab12345 of het wachtwoord wat je gebruikt bij het inloggen voor je localen database
    db.setDatabaseName("mrjwette_db"); // Database, naam database
    db.open();

    if(db.open()){
        cout << "DB connected";
    }else{
        QSqlError err = db.lastError();
        qDebug() << "Database:  " << err.databaseText();
        qDebug() << "Driver:  " << err.driverText();
        qDebug() << "Text:  " << err.text();

    }

}

void Connection::getData()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("databases.aii.avans.nl"); // Hostname, databases.aii.avans.nl of Localhost
    db.setPort(3306); // Port, Deze staat goed
    db.setUserName("mrjwette"); // gebruikersnaam, schoolnaam of naam niet je gebruikt bij het inloggen voor je localen database
    db.setPassword("Ab12345"); // Wachtwoord, Ab12345 of het wachtwoord wat je gebruikt bij het inloggen voor je localen database
    db.setDatabaseName("mrjwette_db"); // Database, naam database
    db.open();

    QSqlQuery query;
    if(db.open())
    {
        if(query.exec("SELECT * FROM meetwaarden"))
        {

            while(query.next())
            {
                qDebug() << query.value(1).toString();
                qDebug() << query.value(2).toString();
                qDebug() << query.value(3).toString();
                qDebug() << query.value(4).toString();
            }
        }
    }
}
