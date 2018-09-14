#include "connection.h"
#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <string>

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    //c.test();

    MainWindow w;
    w.show();

    return a.exec();
}

