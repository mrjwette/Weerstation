/********************************************************************************
** Form generated from reading UI file 'tableview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEVIEW_H
#define UI_TABLEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_TableView
{
public:
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton_4;
    QTableView *tableView;
    QRadioButton *radioButton_4;

    void setupUi(QDialog *TableView)
    {
        if (TableView->objectName().isEmpty())
            TableView->setObjectName(QStringLiteral("TableView"));
        TableView->resize(759, 468);
        radioButton_2 = new QRadioButton(TableView);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(570, 290, 95, 20));
        radioButton_3 = new QRadioButton(TableView);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(570, 260, 95, 20));
        radioButton = new QRadioButton(TableView);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(570, 320, 95, 20));
        textEdit = new QTextEdit(TableView);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(563, 170, 161, 31));
        label = new QLabel(TableView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 731, 71));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton_4 = new QPushButton(TableView);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 370, 171, 28));
        tableView = new QTableView(TableView);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 170, 511, 231));
        radioButton_4 = new QRadioButton(TableView);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(570, 230, 95, 20));

        retranslateUi(TableView);

        QMetaObject::connectSlotsByName(TableView);
    } // setupUi

    void retranslateUi(QDialog *TableView)
    {
        TableView->setWindowTitle(QApplication::translate("TableView", "Table View", nullptr));
        radioButton_2->setText(QApplication::translate("TableView", "Week", nullptr));
        radioButton_3->setText(QApplication::translate("TableView", "Day", nullptr));
        radioButton->setText(QApplication::translate("TableView", "Month", nullptr));
        label->setText(QApplication::translate("TableView", "Table view", nullptr));
        pushButton_4->setText(QApplication::translate("TableView", "View Table Values", nullptr));
        radioButton_4->setText(QApplication::translate("TableView", "View all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableView: public Ui_TableView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEVIEW_H
