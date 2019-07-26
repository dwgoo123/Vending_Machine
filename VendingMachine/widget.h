#ifndef WIDGET_H
#define WIDGET_H
#include <QMessageBox>
#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void changeMoney(int n);
    //void reset();
    int money = 0;
    QMessageBox msg;
    int exc10 = 0;
    int exc100 = 0;

private slots:
    void on_pbCoffee_clicked();

    void on_pbTea_clicked();

    void on_pbGongcha_clicked();

    void on_pb10_clicked();

    void on_pb50_clicked();

    void on_pb100_clicked();

    void on_pb500_clicked();

    void on_reset_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
