/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *pbCoffee;
    QPushButton *pbTea;
    QPushButton *pbGongcha;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 10, 341, 71));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName(QString::fromUtf8("pb10"));
        pb10->setGeometry(QRect(10, 90, 89, 25));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName(QString::fromUtf8("pb50"));
        pb50->setGeometry(QRect(10, 120, 89, 25));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName(QString::fromUtf8("pb100"));
        pb100->setGeometry(QRect(10, 150, 89, 25));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName(QString::fromUtf8("pb500"));
        pb500->setGeometry(QRect(10, 180, 89, 25));
        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName(QString::fromUtf8("pbCoffee"));
        pbCoffee->setGeometry(QRect(200, 90, 111, 25));
        pbTea = new QPushButton(Widget);
        pbTea->setObjectName(QString::fromUtf8("pbTea"));
        pbTea->setGeometry(QRect(200, 120, 111, 25));
        pbGongcha = new QPushButton(Widget);
        pbGongcha->setObjectName(QString::fromUtf8("pbGongcha"));
        pbGongcha->setGeometry(QRect(200, 150, 111, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "200", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        pbTea->setText(QCoreApplication::translate("Widget", "Tea(150)", nullptr));
        pbGongcha->setText(QCoreApplication::translate("Widget", "Gongcha(200)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
