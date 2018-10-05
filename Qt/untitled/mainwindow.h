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

private slots:
    void on_KnopWeek_clicked();

    void on_KnopMaand_clicked();

    void on_KnopRecent_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
