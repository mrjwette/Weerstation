#include "tableview.h"
#include "ui_tableview.h"
#include "mainwindow.h"

TableView::TableView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TableView)
{
    ui->setupUi(this);
    ui->textEdit->setText("yyyy-mm-dd");
}

TableView::~TableView()
{
    delete ui;
}

void TableView::Connection()
{
    db.setHostName("databases.aii.avans.nl");
    db.setPort(3306);
    db.setUserName("mrjwette");
    db.setPassword("Ab12345");
    db.setDatabaseName("mrjwette_db");
    db.open();
}

void TableView::setModel()
{
    query->exec();
    model->setQuery(*query);
    ui->tableView->setModel(model);
}

void TableView::on_pushButton_4_clicked()
{
    Connection();
    QString datum = ui->textEdit->toPlainText();

    if(ui->radioButton->isChecked())
    {
        query->prepare("SELECT Datum, Temperatuur, Luchtvochtigheid, Luchtdruk FROM tblmeetwaarden WHERE MONTH(Datum) = MONTH(:datum) ORDER BY Datum DESC");
        query->bindValue(":datum", datum);
        setModel();
    }
    else if(ui->radioButton_2->isChecked())
    {
        query->prepare("SELECT Datum, Temperatuur, Luchtvochtigheid, Luchtdruk FROM tblmeetwaarden WHERE WEEK(Datum) = WEEK(:datum) ORDER BY Datum DESC");
        query->bindValue(":datum", datum);
        setModel();
    }
    else if(ui->radioButton_3->isChecked())
    {
        query->prepare("SELECT Datum, Temperatuur, Luchtvochtigheid, Luchtdruk FROM tblmeetwaarden WHERE LEFT(Datum, 10) = :datum ORDER BY Datum DESC");
        query->bindValue(":datum", datum);
        setModel();
    }
    else if(ui->radioButton_4->isChecked())
    {
        query->prepare("SELECT Datum, Temperatuur, Luchtvochtigheid, Luchtdruk FROM tblmeetwaarden ORDER BY Datum DESC");
        setModel();
    }

    db.close();
}
