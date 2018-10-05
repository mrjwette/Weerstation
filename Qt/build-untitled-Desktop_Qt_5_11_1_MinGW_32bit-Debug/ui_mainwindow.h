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
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *KnopMaand;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *KnopRecent;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *Header;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QPushButton *KnopWeek;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    QWidget *gridLayoutWidget_8;
    QGridLayout *gridLayout_10;
    QLabel *label_2;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_11;
    QLabel *label_7;
    QWidget *gridLayoutWidget_10;
    QGridLayout *gridLayout_12;
    QLabel *label_3;
    QWidget *gridLayoutWidget_11;
    QGridLayout *gridLayout_13;
    QLabel *label;
    QWidget *gridLayoutWidget_12;
    QGridLayout *gridLayout_14;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(591, 414);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(210, 300, 160, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        KnopMaand = new QPushButton(gridLayoutWidget_2);
        KnopMaand->setObjectName(QStringLiteral("KnopMaand"));

        gridLayout_2->addWidget(KnopMaand, 0, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(410, 301, 160, 41));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        KnopRecent = new QPushButton(gridLayoutWidget_3);
        KnopRecent->setObjectName(QStringLiteral("KnopRecent"));
        KnopRecent->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(KnopRecent, 0, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(centralWidget);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 10, 571, 80));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        Header = new QLabel(gridLayoutWidget_4);
        Header->setObjectName(QStringLiteral("Header"));
        QFont font;
        font.setPointSize(18);
        Header->setFont(font);
        Header->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(Header, 0, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(centralWidget);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(10, 300, 160, 41));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        KnopWeek = new QPushButton(gridLayoutWidget_5);
        KnopWeek->setObjectName(QStringLiteral("KnopWeek"));

        gridLayout_5->addWidget(KnopWeek, 0, 0, 1, 1);

        gridLayoutWidget_7 = new QWidget(centralWidget);
        gridLayoutWidget_7->setObjectName(QStringLiteral("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(210, 190, 160, 51));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_7);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_9->addWidget(label_6, 0, 0, 1, 1);

        gridLayoutWidget_8 = new QWidget(centralWidget);
        gridLayoutWidget_8->setObjectName(QStringLiteral("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(210, 140, 160, 51));
        gridLayout_10 = new QGridLayout(gridLayoutWidget_8);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget_8);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_10->addWidget(label_2, 0, 0, 1, 1);

        gridLayoutWidget_9 = new QWidget(centralWidget);
        gridLayoutWidget_9->setObjectName(QStringLiteral("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(410, 190, 160, 51));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget_9);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_11->addWidget(label_7, 0, 0, 1, 1);

        gridLayoutWidget_10 = new QWidget(centralWidget);
        gridLayoutWidget_10->setObjectName(QStringLiteral("gridLayoutWidget_10"));
        gridLayoutWidget_10->setGeometry(QRect(410, 140, 160, 51));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_10);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_10);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_12->addWidget(label_3, 0, 0, 1, 1);

        gridLayoutWidget_11 = new QWidget(centralWidget);
        gridLayoutWidget_11->setObjectName(QStringLiteral("gridLayoutWidget_11"));
        gridLayoutWidget_11->setGeometry(QRect(10, 140, 160, 51));
        gridLayout_13 = new QGridLayout(gridLayoutWidget_11);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget_11);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_13->addWidget(label, 0, 0, 1, 1);

        gridLayoutWidget_12 = new QWidget(centralWidget);
        gridLayoutWidget_12->setObjectName(QStringLiteral("gridLayoutWidget_12"));
        gridLayoutWidget_12->setGeometry(QRect(10, 190, 160, 51));
        gridLayout_14 = new QGridLayout(gridLayoutWidget_12);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_12);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_14->addWidget(label_5, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 591, 26));
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
        KnopMaand->setText(QApplication::translate("MainWindow", "Month Average", nullptr));
        KnopRecent->setText(QApplication::translate("MainWindow", "Go Home", nullptr));
        Header->setText(QApplication::translate("MainWindow", "Most recent measurements", nullptr));
        KnopWeek->setText(QApplication::translate("MainWindow", "Week Average", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "0%", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Luchtvochtigheid", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "0 hPa", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Luchtdruk", nullptr));
        label->setText(QApplication::translate("MainWindow", "Temperatuur", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "-273 C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
