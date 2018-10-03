#include "range.h"
#include "ui_range.h"

Range::Range(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Range)
{
    ui->setupUi(this);
}

Range::~Range()
{
    delete ui;
}

void Range::on_FromEdit_textChanged(const QString &arg1)
{
    emit fromchange(arg1);
}

void Range::on_ToEdit_textChanged(const QString &arg1)
{
    emit tochange(arg1);
}
