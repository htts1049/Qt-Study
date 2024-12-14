#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QListWidgetItem *item1 = new QListWidgetItem(QIcon(":/resources/img/close-file.jpg"), "Mark");
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/resources/img/new-file.png"), "John");
    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/resources/img/Open-file.png"), "July");

    ui->listWidget->addItem(item1);
    ui->listWidget->addItem(item2);
    ui->listWidget->addItem(item3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // QMessageBox::information(this, "title", ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackground(Qt::red);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}
