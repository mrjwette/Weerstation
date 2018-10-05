#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include <QString>

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

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
        if(query.exec("SELECT Temperatuur, Luchtvochtigheid, Luchtdruk FROM meetwaarden WHERE ID = (SELECT MAX(ID) FROM meetwaarden)"))
        {

            while(query.next())
            {

                ui->label_5->setText(query.value(0).toString());
                ui->label_6->setText(query.value(1).toString());
                ui->label_11->setText(query.value(2).toString());


            }
        }
    }

    ui->label->setText("Last Measurements");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getData()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("databases.aii.avans.nl"); // Hostname, databases.aii.avans.nl of Localhost
    db.setPort(3306); // Port, Deze staat goed
    db.setUserName("mrjwette"); // gebruikersnaam, schoolnaam of naam niet je gebruikt bij het inloggen voor je localen database
    db.setPassword("Ab12345"); // Wachtwoord, Ab12345 of het wachtwoord wat je gebruikt bij het inloggen voor je localen database
    db.setDatabaseName("mrjwette_db"); // Database, naam database
    db.open();
}

void MainWindow::on_Week_clicked()
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
        if(query.exec("SELECT ROUND(AVG(Temperatuur),2) AS Temperatuur, ROUND(AVG(Luchtvochtigheid), 2) AS Luchtvochtigheid, ROUND(AVG(Luchtdruk), 2) AS Luchtdruk FROM meetwaarden WHERE WEEK(Datum) = WEEK(CURRENT_DATE)"))
        {

            while(query.next())
            {

                ui->label_5->setText(query.value(0).toString());
                ui->label_6->setText(query.value(1).toString());
                ui->label_11->setText(query.value(2).toString());


            }
        }
    }

    ui->label->setText("Week Average");

}

void MainWindow::on_Month_clicked()
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
        if(query.exec("SELECT ROUND(AVG(Temperatuur),2) AS Temperatuur, ROUND(AVG(Luchtvochtigheid), 2) AS Luchtvochtigheid, ROUND(AVG(Luchtdruk), 2) AS Luchtdruk FROM meetwaarden WHERE MONTH(Datum) = MONTH(CURRENT_DATE)"))
        {

            while(query.next())
            {

                ui->label_5->setText(query.value(0).toString());
                ui->label_6->setText(query.value(1).toString());
                ui->label_11->setText(query.value(2).toString());


            }
        }
    }

    ui->label->setText("Month Average");
}


void MainWindow::on_LastMesurements_clicked()
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
        if(query.exec("SELECT Temperatuur, Luchtvochtigheid, Luchtdruk FROM meetwaarden WHERE ID = (SELECT MAX(ID) FROM meetwaarden)"))
        {

            while(query.next())
            {

                ui->label_5->setText(query.value(0).toString());
                ui->label_6->setText(query.value(1).toString());
                ui->label_11->setText(query.value(2).toString());


            }
        }
    }

    ui->label->setText("Last Measurements");
}

