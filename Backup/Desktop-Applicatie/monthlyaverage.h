#ifndef MONTHLYAVERAGE_H
#define MONTHLYAVERAGE_H

#endif // MONTHLYAVERAGE_H

#include <QMainWindow>

namespace Ui {
class MonthlyAverage;
}

class MonthlyAverage : public QMainWindow
{
    Q_OBJECT


public:
    explicit MonthlyAverage(QWidget *parent = nullptr);
    ~MonthlyAverage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MonthlyAverage *ui;
};
