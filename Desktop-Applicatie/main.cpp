#include "connection.h"
#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <string>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connection c;

    MainWindow w;
    w.show();

    return a.exec();
}

