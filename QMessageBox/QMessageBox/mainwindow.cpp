#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>      // need to include to use QMessageBox
#include <QDebug>           // neet to include to use qDebug

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    /* Different types of usages */
    // void about                   : 3 arguments, appear message developer wants to appear on QMessageBox
    // void aboutQt                 : 2 arguments, appear information of Qt

    /* Below 4 options of QMessageBox needs basically 3 arguments, but developer can use 4th option. */
    // StandardButton critical      : appear message with critical icon on QMessageBox
    // StandardButton information   : appear message with information icon on QMessageBox
    // StandardButton question      : appear message with question icon on QMessageBox  ( with yes/no button )
    // StandardButton warning       : appear message with warning icon on QMessageBox
    QMessageBox::StandardButton reply = QMessageBox::question(this, "My Title", "This is my custom message",
                                                              QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        qDebug() << "No is clicked";
    }

}

