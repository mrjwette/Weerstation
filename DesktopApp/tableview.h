#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include <QDialog>
#include <QTableView>
#include <QTableWidget>
#include <QSqlDatabase>
#include "mainwindow.h"

namespace Ui {
class TableView;
}

class TableView : public QDialog
{
    Q_OBJECT

public:
    explicit TableView(QWidget *parent = nullptr);
    ~TableView();
    void Connection();
    void setModel();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::TableView *ui;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    QSqlQuery *query = new QSqlQuery(db);
    QSqlQueryModel *model = new QSqlQueryModel();
    QDateEdit *dateEdit = new QDateEdit();
    QDate *datum = new QDate;
};

#endif // TABLEVIEW_H
