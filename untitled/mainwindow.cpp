#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutwidget.h"
#include "speed.h"
#include "range.h"
#include <Qstring>
#include <QTimer>
#include <windows.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->from = 0;
    this->to = 100;
    this->speed = 1;
    this->current = 0;
    this->timer = new QTimer(this);

    ui->setupUi(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(CurChange()));
    connect(this->ui->StartButton,SIGNAL(clicked(bool)),this,SLOT(StartSlot()));
    connect(this->ui->EndButton,SIGNAL(clicked(bool)),this,SLOT(EndSlot()));
    Sleep(5000);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAbout_triggered()
{
    AboutWidget * about = new AboutWidget;
    about->setWindowTitle(QString::fromUtf8("About"));
    about->show();
}

void MainWindow::on_actionspeed_triggered()
{
    Speed *s = new Speed;
    s->setWindowTitle("Speed Set");
    s->show();
    connect(s,SIGNAL(textchange(QString)),this,SLOT(SpeedChange(QString)));
}

void MainWindow::on_actionRange_triggered()
{
    Range *r = new Range;
    r->setWindowTitle("Range Set");
    r->show();
    connect(r,SIGNAL(fromchange(QString)),this,SLOT(FromChange(QString)));
    connect(r,SIGNAL(tochange(QString)),this,SLOT(ToChange(QString)));
}

void MainWindow::setspeed(double sp)
{
    this->speed = sp;
}

void MainWindow::setfrom(double fr)
{
    this->from = fr;
}

void MainWindow::setto(double t)
{
    this->to = t;
}

double MainWindow::getspeed()
{
    return this->speed;
}

double MainWindow::getfrom()
{
    return this->from;
}

double MainWindow::getto()
{
    return this->to;
}

void MainWindow::SpeedChange(QString str)
{
    double temp = str.toDouble();
    this->speed = temp;
}

void MainWindow::FromChange(QString str)
{
    double temp = str.toDouble();
    this->from = temp;
}

void MainWindow::ToChange(QString str)
{
    double temp = str.toDouble();
    this->to = temp;
}

void MainWindow::CurChange()
{
    double temp;
    ///根据from-to生成随机数赋值给current///
    temp = rand()%(int)(this->to-this->from+1) +this->from;
    this->current = temp;
    this->ui->lcdNumber->display(this->current);
}

void MainWindow::StartSlot()
{
    this->timer->start(this->speed);
}

void MainWindow::EndSlot()
{
    this->timer->stop();
}



