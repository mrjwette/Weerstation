/********************************************************************************
** Form generated from reading UI file 'WeeklyAverage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEEKLYAVERAGE_H
#define UI_WEEKLYAVERAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_3;
    QLabel *ValueTemperature;
    QLabel *ValueHumidity;
    QLabel *LabelPress;
    QPushButton *pushButton_4;
    QLabel *LabelHumid;
    QLabel *LabelTemp;
    QPushButton *pushButton_5;
    QLabel *LabelTemp_2;
    QLabel *ValuePressure;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1032, 543);
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(35, 490, 291, 28));
        ValueTemperature = new QLabel(Dialog);
        ValueTemperature->setObjectName(QStringLiteral("ValueTemperature"));
        ValueTemperature->setGeometry(QRect(15, 267, 329, 61));
        QFont font;
        font.setPointSize(25);
        ValueTemperature->setFont(font);
        ValueTemperature->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        ValueHumidity = new QLabel(Dialog);
        ValueHumidity->setObjectName(QStringLiteral("ValueHumidity"));
        ValueHumidity->setGeometry(QRect(350, 268, 328, 61));
        ValueHumidity->setFont(font);
        ValueHumidity->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        LabelPress = new QLabel(Dialog);
        LabelPress->setObjectName(QStringLiteral("LabelPress"));
        LabelPress->setGeometry(QRect(685, 240, 329, 21));
        LabelPress->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(373, 490, 291, 28));
        LabelHumid = new QLabel(Dialog);
        LabelHumid->setObjectName(QStringLiteral("LabelHumid"));
        LabelHumid->setGeometry(QRect(350, 240, 328, 21));
        LabelHumid->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        LabelTemp = new QLabel(Dialog);
        LabelTemp->setObjectName(QStringLiteral("LabelTemp"));
        LabelTemp->setGeometry(QRect(15, 240, 329, 21));
        LabelTemp->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(713, 490, 291, 28));
        LabelTemp_2 = new QLabel(Dialog);
        LabelTemp_2->setObjectName(QStringLiteral("LabelTemp_2"));
        LabelTemp_2->setGeometry(QRect(15, 50, 1011, 51));
        QFont font1;
        font1.setPointSize(28);
        LabelTemp_2->setFont(font1);
        LabelTemp_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        ValuePressure = new QLabel(Dialog);
        ValuePressure->setObjectName(QStringLiteral("ValuePressure"));
        ValuePressure->setGeometry(QRect(685, 268, 329, 61));
        ValuePressure->setFont(font);
        ValuePressure->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "View Line Graph", nullptr));
        ValueTemperature->setText(QApplication::translate("Dialog", "-273\302\260C", nullptr));
        ValueHumidity->setText(QApplication::translate("Dialog", "0%", nullptr));
        LabelPress->setText(QApplication::translate("Dialog", "Air Pressure", nullptr));
        pushButton_4->setText(QApplication::translate("Dialog", "View Monthly Average", nullptr));
        LabelHumid->setText(QApplication::translate("Dialog", "Humidity", nullptr));
        LabelTemp->setText(QApplication::translate("Dialog", "Temperature", nullptr));
        pushButton_5->setText(QApplication::translate("Dialog", "Go Home", nullptr));
        LabelTemp_2->setText(QApplication::translate("Dialog", "Weekly Average", nullptr));
        ValuePressure->setText(QApplication::translate("Dialog", "0 Pa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEEKLYAVERAGE_H
