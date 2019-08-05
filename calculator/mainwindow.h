#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
using namespace std;
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
    void on_pushButton_zero_clicked();

    void on_pushButton_one_clicked();

    void on_pushButton_two_clicked();

    void on_pushButton_three_clicked();

    void on_pushButton_four_clicked();

    void on_pushButton_five_clicked();

    void on_pushButton_six_clicked();

    void on_pushButton_seven_clicked();

    void on_pushButton_eight_clicked();

    void on_pushButton_nine_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_AC_clicked();

private:
    Ui::MainWindow *ui;
    double num1,num2;
    int operatestate;
    bool decimal,number;
    int digit,zero;
    QString str;
};

#endif // MAINWINDOW_H
