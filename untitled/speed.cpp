#include "speed.h"
#include "ui_speed.h"
#include <string>
#include <sstream>

using namespace std;

Speed::Speed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Speed)
{
    ui->setupUi(this);
}

Speed::~Speed()
{
    delete ui;
}

void Speed::on_lineEdit_textEdited(const QString &arg1)
{
    emit textchange(arg1);
}
