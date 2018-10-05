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
using namespace std;



Connection::Connection()
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
    db.close();

}

void Connection::test()
{



    QSqlQuery query;
    query.exec("SELECT * FROM meetwaarden");

}
