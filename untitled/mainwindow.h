#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setspeed(double sp);

    void setfrom(double fr);

    void setto(double t);

    double getspeed();

    double getfrom();

    double getto();


public slots:
    void SpeedChange(QString str);

    void FromChange(QString str);

    void ToChange(QString str);

    void CurChange();  //更新并显示当前数字

    void StartSlot();  //开启计时器

    void EndSlot();    //关闭计时器
private slots:
    void on_actionAbout_triggered();

    void on_actionspeed_triggered();

    void on_actionRange_triggered();
signals:

private:
    Ui::MainWindow *ui;
    double from;
    double to;
    double speed;
    ////每秒出现的数字数量////
    double current;
    ////当前数字////
    QTimer *timer;
    ////内置定时器////
};

#endif // MAINWINDOW_H
