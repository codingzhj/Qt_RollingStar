#include "mainwindow.h"
#include "aboutwidget.h"
#include "speed.h"
#include <QApplication>
#include <QWidget>
#include <QDebug>
#include <QString>
#include <QDateTime>
#include <QPixmap>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle(QString::fromUtf8("Rolling Star"));
    w.show();

    return a.exec();
}
