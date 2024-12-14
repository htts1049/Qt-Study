#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ui->comboBox->addItem(QIcon(":/rec/img/close-file.jpg"), "Mark");
    // ui->comboBox->addItem(QIcon(":/rec/img/new-file.png"), "John");
    // ui->comboBox->addItem(QIcon(":/rec/img/Open-file.png"), "July");

    for (int i = 0; i < 10; i++)
    {
        ui->comboBox->addItem(QString::number(i) + "name");
    }

    ui->comboBox->insertItem(3, QIcon(":/rec/img/Open-file.png"), "new text");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // QMessageBox::information(this, "title", ui->comboBox->currentText());
    QMessageBox::information(this, "title", QString::number(ui->comboBox->currentIndex()));
}

