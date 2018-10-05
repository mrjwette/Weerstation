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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *LastMesurements;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QPushButton *Week;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QPushButton *Month;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QLabel *label_2;
    QWidget *gridLayoutWidget_8;
    QGridLayout *gridLayout_8;
    QLabel *label_6;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_9;
    QLabel *label_3;
    QWidget *gridLayoutWidget_11;
    QGridLayout *gridLayout_11;
    QLabel *label_4;
    QWidget *gridLayoutWidget_12;
    QGridLayout *gridLayout_12;
    QLabel *label_8;
    QWidget *gridLayoutWidget_13;
    QGridLayout *gridLayout_14;
    QLabel *label_10;
    QWidget *gridLayoutWidget_10;
    QGridLayout *gridLayout_15;
    QLabel *label_5;
    QWidget *gridLayoutWidget_14;
    QGridLayout *gridLayout_16;
    QLabel *label_12;
    QWidget *gridLayoutWidget_15;
    QGridLayout *gridLayout_17;
    QLabel *label_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(765, 530);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 761, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(529, 350, 221, 80));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        LastMesurements = new QPushButton(gridLayoutWidget_3);
        LastMesurements->setObjectName(QStringLiteral("LastMesurements"));

        gridLayout_3->addWidget(LastMesurements, 0, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(centralWidget);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 350, 221, 80));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        Week = new QPushButton(gridLayoutWidget_4);
        Week->setObjectName(QStringLiteral("Week"));

        gridLayout_4->addWidget(Week, 0, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(centralWidget);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(270, 350, 221, 80));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        Month = new QPushButton(gridLayoutWidget_5);
        Month->setObjectName(QStringLiteral("Month"));

        gridLayout_5->addWidget(Month, 0, 0, 1, 1);

        gridLayoutWidget_6 = new QWidget(centralWidget);
        gridLayoutWidget_6->setObjectName(QStringLiteral("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(10, 80, 221, 111));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_6->addWidget(label_2, 0, 0, 1, 1);

        gridLayoutWidget_8 = new QWidget(centralWidget);
        gridLayoutWidget_8->setObjectName(QStringLiteral("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(270, 200, 151, 111));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_8);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_8);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_6, 1, 0, 1, 1);

        gridLayoutWidget_9 = new QWidget(centralWidget);
        gridLayoutWidget_9->setObjectName(QStringLiteral("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(270, 80, 221, 111));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_9);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_9->addWidget(label_3, 0, 0, 1, 1);

        gridLayoutWidget_11 = new QWidget(centralWidget);
        gridLayoutWidget_11->setObjectName(QStringLiteral("gridLayoutWidget_11"));
        gridLayoutWidget_11->setGeometry(QRect(530, 80, 221, 111));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_11);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget_11);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_11->addWidget(label_4, 0, 0, 1, 1);

        gridLayoutWidget_12 = new QWidget(centralWidget);
        gridLayoutWidget_12->setObjectName(QStringLiteral("gridLayoutWidget_12"));
        gridLayoutWidget_12->setGeometry(QRect(430, 200, 61, 111));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_12);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(gridLayoutWidget_12);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout_12->addWidget(label_8, 0, 0, 1, 1);

        gridLayoutWidget_13 = new QWidget(centralWidget);
        gridLayoutWidget_13->setObjectName(QStringLiteral("gridLayoutWidget_13"));
        gridLayoutWidget_13->setGeometry(QRect(170, 200, 61, 111));
        gridLayout_14 = new QGridLayout(gridLayoutWidget_13);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(gridLayoutWidget_13);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        gridLayout_14->addWidget(label_10, 0, 0, 1, 1);

        gridLayoutWidget_10 = new QWidget(centralWidget);
        gridLayoutWidget_10->setObjectName(QStringLiteral("gridLayoutWidget_10"));
        gridLayoutWidget_10->setGeometry(QRect(10, 200, 151, 111));
        gridLayout_15 = new QGridLayout(gridLayoutWidget_10);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_10);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(label_5, 0, 0, 1, 1);

        gridLayoutWidget_14 = new QWidget(centralWidget);
        gridLayoutWidget_14->setObjectName(QStringLiteral("gridLayoutWidget_14"));
        gridLayoutWidget_14->setGeometry(QRect(690, 200, 61, 111));
        gridLayout_16 = new QGridLayout(gridLayoutWidget_14);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(gridLayoutWidget_14);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        gridLayout_16->addWidget(label_12, 0, 0, 1, 1);

        gridLayoutWidget_15 = new QWidget(centralWidget);
        gridLayoutWidget_15->setObjectName(QStringLiteral("gridLayoutWidget_15"));
        gridLayoutWidget_15->setGeometry(QRect(530, 200, 151, 111));
        gridLayout_17 = new QGridLayout(gridLayoutWidget_15);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_15);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_17->addWidget(label_11, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 765, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Select Measurements", nullptr));
        LastMesurements->setText(QApplication::translate("MainWindow", "Last Measurements", nullptr));
        Week->setText(QApplication::translate("MainWindow", "This Week", nullptr));
        Month->setText(QApplication::translate("MainWindow", "This Month", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Temperature", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Humidity", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Pressure", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "%", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\302\260C", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "-273", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "hPa", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
