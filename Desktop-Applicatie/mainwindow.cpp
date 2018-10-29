#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "valuelabels.h"
#include "monthlyaverage.h"

#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    valueLabels *labs = new valueLabels();

    labs->setTempValue(-273);

    updateValueLabels( labs->getTempValue(), labs->getHumidValue(), labs->getPressValue() );
}

void MainWindow::updateValueLabels(double tempVal, double humidVal, double pressVal)
{
    ui->ValueTemperature->setText(QString::number(tempVal) + "°C");
    ui->ValueHumidity->setText(QString::number(humidVal) + "%");
    ui->ValuePressure->setText(QString::number(pressVal) + "Pa");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Week Average");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Month Average");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText("Last measurment data");
}
