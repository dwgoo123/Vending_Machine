#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pbCoffee->setEnabled(false);
    ui->pbTea->setEnabled(false);
    ui->pbGongcha->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;

}



void Widget::changeMoney(int n)
{
    money += n;
    ui->lcdNumber->display(QString::number(money));
    if (money >= 200){
        ui->pbCoffee->setEnabled(true);
        ui->pbTea->setEnabled(true);
        ui->pbGongcha->setEnabled(true);
    } else if (money >= 150){
        ui->pbCoffee->setEnabled(true);
        ui->pbTea->setEnabled(true);
        ui->pbGongcha->setEnabled(false);
    } else if (money >= 100){
        ui->pbCoffee->setEnabled(true);
        ui->pbTea->setEnabled(false);
        ui->pbGongcha->setEnabled(false);
    } else {
        ui->pbCoffee->setEnabled(false);
        ui->pbTea->setEnabled(false);
        ui->pbGongcha->setEnabled(false);
    }

}

/*
void Widget::reset()
{
    money = 0;
}
*/
void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
    exc100 = money / 100;
    exc10 = (money % 100) / 10;
    msg.information(nullptr, "change", "100coin: "+QString::number(exc100)+ ", 10coin: "+QString::number((exc10)));
}

void Widget::on_pbTea_clicked()
{
    changeMoney(-150);
    exc100 = money / 100;
    exc10 = (money % 100) / 10;
    msg.information(nullptr, "change", "100coin: "+QString::number(exc100)+ ", 10coin: "+QString::number((exc10)));
}

void Widget::on_pbGongcha_clicked()
{
    changeMoney(-200);
    exc100 = money / 100;
    exc10 = (money % 100) / 10;
    msg.information(nullptr, "change", "100coin: "+QString::number(exc100)+ ", 10coin: "+QString::number((exc10)));
}

void Widget::on_pb10_clicked()
{
    changeMoney(10);
}

void Widget::on_pb50_clicked()
{
    changeMoney(50);
}

void Widget::on_pb100_clicked()
{
    changeMoney(100);
}

void Widget::on_pb500_clicked()
{
    changeMoney(200);
}

void Widget::on_reset_clicked()
{
    //reset();
    money = 0;
    ui->lcdNumber->display(QString::number(money));
    ui->pbCoffee->setEnabled(false);
    ui->pbTea->setEnabled(false);
    ui->pbGongcha->setEnabled(false);
}
