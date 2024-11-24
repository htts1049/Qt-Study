#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    // Dialog dialog;              // 1. create dialog class
    // dialog.setModal(true);      // 2. set modal to true
    // dialog.exec();              // 3. excute object of dialog

    dialog = new Dialog(this);     // 1. declare dialog's parent is this(=main window at this time)
    dialog->show();                // 2. show dialog
    hide();                        // 3. hide main window
}

