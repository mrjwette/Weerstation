/********************************************************************************
** Form generated from reading UI file 'MonthlyAverage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTHLYAVERAGE_H
#define UI_MONTHLYAVERAGE_H

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
    QLabel *LabelHumid;
    QLabel *ValuePressure;
    QLabel *ValueHumidity;
    QLabel *ValueTemperature;
    QLabel *LabelPress;
    QLabel *LabelTemp_2;
    QLabel *LabelTemp;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1032, 550);
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 492, 291, 28));
        LabelHumid = new QLabel(Dialog);
        LabelHumid->setObjectName(QStringLiteral("LabelHumid"));
        LabelHumid->setGeometry(QRect(345, 242, 328, 21));
        LabelHumid->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        ValuePressure = new QLabel(Dialog);
        ValuePressure->setObjectName(QStringLiteral("ValuePressure"));
        ValuePressure->setGeometry(QRect(680, 270, 329, 61));
        QFont font;
        font.setPointSize(25);
        ValuePressure->setFont(font);
        ValuePressure->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        ValueHumidity = new QLabel(Dialog);
        ValueHumidity->setObjectName(QStringLiteral("ValueHumidity"));
        ValueHumidity->setGeometry(QRect(345, 270, 328, 61));
        ValueHumidity->setFont(font);
        ValueHumidity->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        ValueTemperature = new QLabel(Dialog);
        ValueTemperature->setObjectName(QStringLiteral("ValueTemperature"));
        ValueTemperature->setGeometry(QRect(10, 269, 329, 61));
        ValueTemperature->setFont(font);
        ValueTemperature->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        LabelPress = new QLabel(Dialog);
        LabelPress->setObjectName(QStringLiteral("LabelPress"));
        LabelPress->setGeometry(QRect(680, 242, 329, 21));
        LabelPress->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        LabelTemp_2 = new QLabel(Dialog);
        LabelTemp_2->setObjectName(QStringLiteral("LabelTemp_2"));
        LabelTemp_2->setGeometry(QRect(10, 52, 1011, 51));
        QFont font1;
        font1.setPointSize(28);
        LabelTemp_2->setFont(font1);
        LabelTemp_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        LabelTemp = new QLabel(Dialog);
        LabelTemp->setObjectName(QStringLiteral("LabelTemp"));
        LabelTemp->setGeometry(QRect(10, 242, 329, 21));
        LabelTemp->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(368, 492, 291, 28));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(708, 492, 291, 28));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "View Line Graph", nullptr));
        LabelHumid->setText(QApplication::translate("Dialog", "Humidity", nullptr));
        ValuePressure->setText(QApplication::translate("Dialog", "0 Pa", nullptr));
        ValueHumidity->setText(QApplication::translate("Dialog", "0%", nullptr));
        ValueTemperature->setText(QApplication::translate("Dialog", "-273\302\260C", nullptr));
        LabelPress->setText(QApplication::translate("Dialog", "Air Pressure", nullptr));
        LabelTemp_2->setText(QApplication::translate("Dialog", "Monthly Average", nullptr));
        LabelTemp->setText(QApplication::translate("Dialog", "Temperature", nullptr));
        pushButton_4->setText(QApplication::translate("Dialog", "View Weekly Average", nullptr));
        pushButton_5->setText(QApplication::translate("Dialog", "Go Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTHLYAVERAGE_H
