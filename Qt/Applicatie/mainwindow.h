#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void getData();

private slots:
    void on_Week_clicked();

    void on_Month_clicked();

    void on_LastMesurements_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
