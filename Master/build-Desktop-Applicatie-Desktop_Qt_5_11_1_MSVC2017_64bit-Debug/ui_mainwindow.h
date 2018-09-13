/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *LabelTemp;
    QLabel *LabelHumid;
    QLabel *LabelPress;
    QLabel *ValueTemperature;
    QLabel *ValueHumidity;
    QLabel *ValuePressure;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        LabelTemp = new QLabel(centralWidget);
        LabelTemp->setObjectName(QStringLiteral("LabelTemp"));
        LabelTemp->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(LabelTemp, 0, 0, 1, 1);

        LabelHumid = new QLabel(centralWidget);
        LabelHumid->setObjectName(QStringLiteral("LabelHumid"));
        LabelHumid->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(LabelHumid, 0, 1, 1, 1);

        LabelPress = new QLabel(centralWidget);
        LabelPress->setObjectName(QStringLiteral("LabelPress"));
        LabelPress->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(LabelPress, 0, 2, 1, 1);

        ValueTemperature = new QLabel(centralWidget);
        ValueTemperature->setObjectName(QStringLiteral("ValueTemperature"));
        QFont font;
        font.setPointSize(25);
        ValueTemperature->setFont(font);
        ValueTemperature->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(ValueTemperature, 1, 0, 1, 1);

        ValueHumidity = new QLabel(centralWidget);
        ValueHumidity->setObjectName(QStringLiteral("ValueHumidity"));
        ValueHumidity->setFont(font);
        ValueHumidity->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(ValueHumidity, 1, 1, 1, 1);

        ValuePressure = new QLabel(centralWidget);
        ValuePressure->setObjectName(QStringLiteral("ValuePressure"));
        ValuePressure->setFont(font);
        ValuePressure->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(ValuePressure, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        LabelTemp->setText(QApplication::translate("MainWindow", "Temperature", nullptr));
        LabelHumid->setText(QApplication::translate("MainWindow", "Humidity", nullptr));
        LabelPress->setText(QApplication::translate("MainWindow", "Air Pressure", nullptr));
        ValueTemperature->setText(QApplication::translate("MainWindow", "-273\302\260C", nullptr));
        ValueHumidity->setText(QApplication::translate("MainWindow", "0%", nullptr));
        ValuePressure->setText(QApplication::translate("MainWindow", "0 Pa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
