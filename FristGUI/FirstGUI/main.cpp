#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // MainWindow Class exists in mainwindow.h.
    MainWindow w;
    w.show();
    return a.exec();
}
