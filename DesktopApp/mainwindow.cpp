#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tableview.h"

void MainWindow::Connection()
{
    db.setHostName("databases.aii.avans.nl");
    db.setPort(3306);
    db.setUserName("mrjwette");
    db.setPassword("Ab12345");
    db.setDatabaseName("mrjwette_db");
    db.open();
}

void MainWindow::SetLabels()
{
    query->exec();
    while(query->next())
    {
        ui->label_6->setText(query->value(2).toString());       //set text label temperature
        ui->label_7->setText(query->value(3).toString());       //set text label humidity
        ui->label_5->setText(query->value(4).toString());       //set text label pressure
        ui->label_9->setText(query->value(0).toString());       //set text label date
        ui->label_10->setText(query->value(1).toString());      //set text label time
   }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setText("yyyy-mm-dd");

    Connection();
    query->prepare("SELECT LEFT(MAX(Datum), 10), RIGHT(MAX(Datum), 8), Temperatuur, Luchtvochtigheid, Luchtdruk FROM tblmeetwaarden");
    ui->label->setText("Most Recent Measurements");
    SetLabels();

   db.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    Connection();
    query->prepare("SELECT LEFT(MAX(Datum), 10), RIGHT(MAX(Datum), 8), Temperatuur, Luchtvochtigheid, Luchtdruk FROM tblmeetwaarden");
    SetLabels();
    db.close();
}


void MainWindow::on_pushButton_4_clicked()
{
    Connection();
    QString datum = ui->textEdit->toPlainText();

    if (ui->radioButton->isChecked())
    {
        query->prepare("SELECT LEFT(MAX(Datum), 10), RIGHT(MAX(Datum), 8), ROUND(AVG(temperatuur), 2), ROUND(AVG(luchtvochtigheid), 2), ROUND(AVG(luchtdruk), 0) FROM tblmeetwaarden WHERE MONTH(Datum) = MONTH(:datum)");
        query->bindValue(":datum", datum);
        SetLabels();
    }
    else if(ui->radioButton_2->isChecked())
    {
        query->prepare("SELECT LEFT(MAX(Datum), 10), RIGHT(MAX(Datum), 8), ROUND(AVG(Temperatuur), 2), ROUND(AVG(Luchtvochtigheid), 2), ROUND(AVG(Luchtdruk), 0) FROM tblmeetwaarden WHERE WEEK(datum) = WEEK(:datum)");
        query->bindValue(":datum", datum);
        SetLabels();
    }
    else if(ui->radioButton_3->isChecked())
    {
        query->prepare("SELECT LEFT(MAX(Datum), 10), RIGHT(MAX(Datum), 8), ROUND(AVG(Temperatuur), 2), ROUND(AVG(Luchtvochtigheid),2), ROUND(AVG(Luchtdruk), 0) FROM tblmeetwaarden WHERE LEFT(Datum, 10) = :datum");
        query->bindValue(":datum", datum);
        SetLabels();
    }
    else
    {
        query->prepare("SELECT LEFT(MAX(Datum), 10), RIGHT(MAX(Datum), 8), Temperatuur, Luchtvochtigheid, Luchtdruk FROM tblmeetwaarden");
        SetLabels();
    }

    db.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    TableView tv;
    tv.setModal(true);
    tv.exec();
}


