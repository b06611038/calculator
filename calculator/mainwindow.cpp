#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num1=0;
    num2=0;
    operatestate=0;
    decimal=0;
    digit=0;
    zero=0;
    number=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_zero_clicked()
{
    ui->pushButton_mul->setEnabled(true);
    ui->pushButton_div->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_minus->setEnabled(true);
    if(decimal==1){
        num1*=pow(10,digit);
        num1=num1*10+0;
        digit++;
        num1/=pow(10,digit);
        zero++;
        if(num1==0.0||number==0){
            str=QString::number(num1)+".";
        }
        else {
            str=QString::number(num1);
        }
        for(int i=0;i<zero;i++)
        {
            str+="0";
        }
        ui->lcdNumber->display(str);
    }
    else{
        num1=num1*10+0;
        ui->lcdNumber->display(num1);
    }

}

void MainWindow::on_pushButton_one_clicked()
{
    zero=0;
    ui->pushButton_mul->setEnabled(true);
    ui->pushButton_div->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_minus->setEnabled(true);
    if(decimal==1){
        num1*=pow(10,digit);
        num1=num1*10+1;
        digit++;
        num1/=pow(10,digit);
        ui->lcdNumber->display(num1);
        number=1;
    }
    else{
        num1=num1*10+1;
        ui->lcdNumber->display(num1);
    }
}

void MainWindow::on_pushButton_two_clicked()
{
    zero=0;
    ui->pushButton_mul->setEnabled(true);
    ui->pushButton_div->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_minus->setEnabled(true);
    if(decimal==1){
        num1*=pow(10,digit);
        num1=num1*10+2;
        digit++;
        num1/=pow(10,digit);
        ui->lcdNumber->display(num1);
        number=1;
    }
    else{
        num1=num1*10+2;
        ui->lcdNumber->display(num1);
    }
}

void MainWindow::on_pushButton_three_clicked()
{
    zero=0;
    ui->pushButton_mul->setEnabled(true);
    ui->pushButton_div->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_minus->setEnabled(true);
    if(decimal==1){
        num1*=pow(10,digit);
        num1=num1*10+3;
        digit++;
        num1/=pow(10,digit);
        ui->lcdNumber->display(num1);
        number=1;
    }
    else{
        num1=num1*10+3;
        ui->lcdNumber->display(num1);
    }
}

void MainWindow::on_pushButton_four_clicked()
{
    zero=0;
    ui->pushButton_mul->setEnabled(true);
    ui->pushButton_div->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_minus->setEnabled(true);
    if(decimal==1){
        num1*=pow(10,digit);
        num1=num1*10+4;
        digit++;
        num1/=pow(10,digit);
        ui->lcdNumber->display(num1);
        number=1;
    }
    else{
        num1=num1*10+4;
        ui->lcdNumber->display(num1);
    }
}

void MainWindow::on_pushButton_five_clicked()
{
    zero=0;
    ui->pushButton_mul->setEnabled(true);
    ui->pushButton_div->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_minus->setEnabled(true);
    if(decimal==1){
        num1*=pow(10,digit);
        num1=num1*10+5;
        digit++;
        num1/=pow(10,digit);
        ui->lcdNumber->display(num1);
        number=1;
    }
    else{
        num1=num1*10+5;
        ui->lcdNumber->display(num1);
    }
}

void MainWindow::on_pushButton_six_clicked()
{
    zero=0;
    ui->pushButton_mul->setEnabled(true);
    ui->pushButton_div->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_minus->setEnabled(true);
    if(decimal==1){
        num1*=pow(10,digit);
        num1=num1*10+6;
        digit++;
        num1/=pow(10,digit);
        ui->lcdNumber->display(num1);
        number=1;
    }
    else{
        num1=num1*10+6;
        ui->lcdNumber->display(num1);
    }
}

void MainWindow::on_pushButton_seven_clicked()
{
    zero=0;
    ui->pushButton_mul->setEnabled(true);
    ui->pushButton_div->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_minus->setEnabled(true);
    if(decimal==1){
        num1*=pow(10,digit);
        num1=num1*10+7;
        digit++;
        num1/=pow(10,digit);
        ui->lcdNumber->display(num1);
        number=1;
    }
    else{
        num1=num1*10+7;
        ui->lcdNumber->display(num1);
    }
}

void MainWindow::on_pushButton_eight_clicked()
{
    zero=0;
    ui->pushButton_mul->setEnabled(true);
    ui->pushButton_div->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_minus->setEnabled(true);
    if(decimal==1){
        num1*=pow(10,digit);
        num1=num1*10+8;
        digit++;
        num1/=pow(10,digit);
        ui->lcdNumber->display(num1);
        number=1;
    }
    else{
        num1=num1*10+8;
        ui->lcdNumber->display(num1);
    }
}

void MainWindow::on_pushButton_nine_clicked()
{
    zero=0;
    ui->pushButton_mul->setEnabled(true);
    ui->pushButton_div->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_minus->setEnabled(true);
    if(decimal==1){
        num1*=pow(10,digit);
        num1=num1*10+9;
        digit++;
        num1/=pow(10,digit);
        ui->lcdNumber->display(num1);
        number=1;
    }
    else{
        num1=num1*10+9;
        ui->lcdNumber->display(num1);
    }
}

void MainWindow::on_pushButton_dot_clicked()
{
    zero=0;
    decimal=1;
    digit=0;
    ui->pushButton_mul->setEnabled(false);
    ui->pushButton_div->setEnabled(false);
    ui->pushButton_plus->setEnabled(false);
    ui->pushButton_minus->setEnabled(false);
    ui->pushButton_dot->setEnabled(false);
    str=QString::number(num1)+".";
    ui->lcdNumber->display(str);
}

void MainWindow::on_pushButton_div_clicked()
{
        zero=0;
        decimal=0;
        digit=0;
        ui->pushButton_dot->setEnabled(true);
        ui->pushButton_mul->setEnabled(false);
        ui->pushButton_div->setEnabled(false);
        ui->pushButton_plus->setEnabled(false);
        ui->pushButton_minus->setEnabled(false);
        switch(operatestate){
        case 0: num2=num1;
            break;
        case 1:num2+=num1;
            break;
        case 2:num2-=num1;
            break;
        case 3:num2*=num1;
            break;
        case 4:num2/=num1;
            break;
        }
        num1=0;
        ui->lcdNumber->display(num2);
        operatestate=4;
        number=0;
}

void MainWindow::on_pushButton_mul_clicked()
{
        zero=0;
        decimal=0;
        digit=0;
        ui->pushButton_dot->setEnabled(true);
        ui->pushButton_mul->setEnabled(false);
        ui->pushButton_div->setEnabled(false);
        ui->pushButton_plus->setEnabled(false);
        ui->pushButton_minus->setEnabled(false);
        switch(operatestate){
        case 0: num2=num1;
            break;
        case 1:num2+=num1;
            break;
        case 2:num2-=num1;
            break;
        case 3:num2*=num1;
            break;
        case 4:num2/=num1;
            break;
        }
        num1=0;
        ui->lcdNumber->display(num2);
        operatestate=3;
         number=0;
}
void MainWindow::on_pushButton_plus_clicked()
{
        zero=0;
        decimal=0;
        digit=0;
        ui->pushButton_dot->setEnabled(true);
        ui->pushButton_mul->setEnabled(false);
        ui->pushButton_div->setEnabled(false);
        ui->pushButton_plus->setEnabled(false);
        ui->pushButton_minus->setEnabled(false);
        switch(operatestate){
        case 0: num2=num1;
            break;
        case 1:num2+=num1;
            break;
        case 2:num2-=num1;
            break;
        case 3:num2*=num1;
            break;
        case 4:num2/=num1;
            break;
        }
        num1=0;
        ui->lcdNumber->display(num2);
        operatestate=1;
         number=0;
}

void MainWindow::on_pushButton_minus_clicked()
{
        zero=0;
        decimal=0;
        digit=0;
        ui->pushButton_dot->setEnabled(true);
        ui->pushButton_mul->setEnabled(false);
        ui->pushButton_div->setEnabled(false);
        ui->pushButton_plus->setEnabled(false);
        ui->pushButton_minus->setEnabled(false);
        switch(operatestate){
        case 0: num2=num1;
            break;
        case 1:num2+=num1;
            break;
        case 2:num2-=num1;
            break;
        case 3:num2*=num1;
            break;
        case 4:num2/=num1;
            break;
        }
        num1=0;
        ui->lcdNumber->display(num2);
        operatestate=2;
         number=0;
}

void MainWindow::on_pushButton_equal_clicked()
{
        zero=0;
        decimal=0;
        digit=0;
        ui->pushButton_dot->setEnabled(true);
        switch(operatestate){
        case 0: num2=num1;
            break;
        case 1:num2+=num1;
            break;
        case 2:num2-=num1;
            break;
        case 3:num2*=num1;
            break;
        case 4:num2/=num1;
            break;
    }
        num1=0;
        operatestate=5;
        ui->lcdNumber->display(num2);
         number=0;
}

void MainWindow::on_pushButton_AC_clicked()
{
     number=0;
    zero=0;
    decimal=0;
    digit=0;
    ui->pushButton_dot->setEnabled(true);
    num1=0;
    num2=0;
    operatestate=0;
    ui->lcdNumber->display(0);
}
