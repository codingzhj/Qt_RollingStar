#ifndef SPEED_H
#define SPEED_H
#include <Qstring>
#include <QWidget>

namespace Ui {
class Speed;
}

class Speed : public QWidget
{
    Q_OBJECT

public:
    explicit Speed(QWidget *parent = 0);
    ~Speed();

signals:
    void textchange(QString str);


private slots:
    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::Speed *ui;
};

#endif // SPEED_H
