/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
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
    QPushButton *pushButton_three;
    QPushButton *pushButton_zero;
    QPushButton *pushButton_six;
    QPushButton *pushButton_seven;
    QPushButton *pushButton_div;
    QPushButton *pushButton_two;
    QPushButton *pushButton_four;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_nine;
    QPushButton *pushButton_five;
    QPushButton *pushButton_one;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_eight;
    QPushButton *pushButton_AC;
    QLCDNumber *lcdNumber;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(413, 323);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 110, 320, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_three = new QPushButton(gridLayoutWidget);
        pushButton_three->setObjectName(QString::fromUtf8("pushButton_three"));

        gridLayout->addWidget(pushButton_three, 3, 2, 1, 1);

        pushButton_zero = new QPushButton(gridLayoutWidget);
        pushButton_zero->setObjectName(QString::fromUtf8("pushButton_zero"));

        gridLayout->addWidget(pushButton_zero, 4, 1, 1, 1);

        pushButton_six = new QPushButton(gridLayoutWidget);
        pushButton_six->setObjectName(QString::fromUtf8("pushButton_six"));

        gridLayout->addWidget(pushButton_six, 2, 2, 1, 1);

        pushButton_seven = new QPushButton(gridLayoutWidget);
        pushButton_seven->setObjectName(QString::fromUtf8("pushButton_seven"));

        gridLayout->addWidget(pushButton_seven, 0, 0, 1, 1);

        pushButton_div = new QPushButton(gridLayoutWidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));

        gridLayout->addWidget(pushButton_div, 0, 3, 1, 1);

        pushButton_two = new QPushButton(gridLayoutWidget);
        pushButton_two->setObjectName(QString::fromUtf8("pushButton_two"));

        gridLayout->addWidget(pushButton_two, 3, 1, 1, 1);

        pushButton_four = new QPushButton(gridLayoutWidget);
        pushButton_four->setObjectName(QString::fromUtf8("pushButton_four"));

        gridLayout->addWidget(pushButton_four, 2, 0, 1, 1);

        pushButton_equal = new QPushButton(gridLayoutWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));

        gridLayout->addWidget(pushButton_equal, 4, 2, 1, 1);

        pushButton_plus = new QPushButton(gridLayoutWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));

        gridLayout->addWidget(pushButton_plus, 3, 3, 1, 1);

        pushButton_mul = new QPushButton(gridLayoutWidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));

        gridLayout->addWidget(pushButton_mul, 2, 3, 1, 1);

        pushButton_minus = new QPushButton(gridLayoutWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));

        gridLayout->addWidget(pushButton_minus, 4, 3, 1, 1);

        pushButton_nine = new QPushButton(gridLayoutWidget);
        pushButton_nine->setObjectName(QString::fromUtf8("pushButton_nine"));

        gridLayout->addWidget(pushButton_nine, 0, 2, 1, 1);

        pushButton_five = new QPushButton(gridLayoutWidget);
        pushButton_five->setObjectName(QString::fromUtf8("pushButton_five"));

        gridLayout->addWidget(pushButton_five, 2, 1, 1, 1);

        pushButton_one = new QPushButton(gridLayoutWidget);
        pushButton_one->setObjectName(QString::fromUtf8("pushButton_one"));

        gridLayout->addWidget(pushButton_one, 3, 0, 1, 1);

        pushButton_dot = new QPushButton(gridLayoutWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));

        gridLayout->addWidget(pushButton_dot, 4, 0, 1, 1);

        pushButton_eight = new QPushButton(gridLayoutWidget);
        pushButton_eight->setObjectName(QString::fromUtf8("pushButton_eight"));

        gridLayout->addWidget(pushButton_eight, 0, 1, 1, 1);

        pushButton_AC = new QPushButton(centralWidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(170, 80, 75, 23));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 20, 311, 51));
        lcdNumber->setAutoFillBackground(false);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(12);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 413, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_three->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_zero->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_six->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_seven->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_div->setText(QApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_two->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_four->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_mul->setText(QApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_nine->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_five->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_one->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_eight->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_AC->setText(QApplication::translate("MainWindow", "AC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
