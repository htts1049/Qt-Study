#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* 1. connect sender and receiver */
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),    // sender, signal
            ui->progressBar, SLOT(setValue(int)));              // receiver, slot

    /* 2. disconnect sender and receiver */
    disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)), // sender, signal
            ui->progressBar, SLOT(setValue(int)));              // receiver, slot
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_progressBar_valueChanged(int value)
{

}

