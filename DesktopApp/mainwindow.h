#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
#include <QListView>
#include <QDateEdit>
#include <QDate>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Connection();
    void SetLabels();


private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    QSqlQuery *query = new QSqlQuery(db);
    QSqlQueryModel *model = new QSqlQueryModel();
    QDateEdit *dateEdit = new QDateEdit();
    QDate *datum = new QDate;
};

#endif // MAINWINDOW_H
