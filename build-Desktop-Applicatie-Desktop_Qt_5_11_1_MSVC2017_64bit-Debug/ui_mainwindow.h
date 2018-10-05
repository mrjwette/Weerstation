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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *ValueHumidity;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *LabelHumid;
    QLabel *LabelPress;
    QPushButton *pushButton_3;
    QLabel *ValueTemperature;
    QLabel *ValuePressure;
    QPushButton *pushButton;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(732, 467);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ValueHumidity = new QLabel(centralWidget);
        ValueHumidity->setObjectName(QStringLiteral("ValueHumidity"));
        QFont font;
        font.setPointSize(25);
        ValueHumidity->setFont(font);
        ValueHumidity->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(ValueHumidity, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 3);

        LabelHumid = new QLabel(centralWidget);
        LabelHumid->setObjectName(QStringLiteral("LabelHumid"));
        LabelHumid->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(LabelHumid, 1, 1, 1, 1);

        LabelPress = new QLabel(centralWidget);
        LabelPress->setObjectName(QStringLiteral("LabelPress"));
        LabelPress->setEnabled(true);
        LabelPress->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(LabelPress, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        ValueTemperature = new QLabel(centralWidget);
        ValueTemperature->setObjectName(QStringLiteral("ValueTemperature"));
        ValueTemperature->setFont(font);
        ValueTemperature->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(ValueTemperature, 2, 0, 1, 1);

        ValuePressure = new QLabel(centralWidget);
        ValuePressure->setObjectName(QStringLiteral("ValuePressure"));
        ValuePressure->setFont(font);
        ValuePressure->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(ValuePressure, 2, 2, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 0, 1, 1);

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
        ValueHumidity->setText(QApplication::translate("MainWindow", "0%", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Month Average", nullptr));
        label->setText(QApplication::translate("MainWindow", "Last measurment data", nullptr));
        LabelHumid->setText(QApplication::translate("MainWindow", "Humidity", nullptr));
        LabelPress->setText(QApplication::translate("MainWindow", "Air Pressure", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Last measurements", nullptr));
        ValueTemperature->setText(QApplication::translate("MainWindow", "-273\302\260C", nullptr));
        ValuePressure->setText(QApplication::translate("MainWindow", "0 Pa", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Week Average", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Temperatuur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
