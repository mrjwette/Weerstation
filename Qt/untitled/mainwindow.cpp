#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_KnopWeek_clicked()
{
    ui->Header->setText("Week Average");
}


void MainWindow::on_KnopMaand_clicked()
{
    ui->Header->setText("Month Average");
}



void MainWindow::on_KnopRecent_clicked()
{
    ui->Header->setText("Most recent measurements");
}
