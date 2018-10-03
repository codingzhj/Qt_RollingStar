#ifndef RANGE_H
#define RANGE_H

#include <QWidget>

namespace Ui {
class Range;
}

class Range : public QWidget
{
    Q_OBJECT

public:
    explicit Range(QWidget *parent = 0);
    ~Range();

signals:
    void fromchange(QString);
    void tochange(QString);

private slots:
    void on_FromEdit_textChanged(const QString &arg1);

    void on_ToEdit_textChanged(const QString &arg1);

private:
    Ui::Range *ui;
};

#endif // RANGE_H
