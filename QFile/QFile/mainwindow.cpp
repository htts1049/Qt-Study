#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>

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

void MainWindow::on_pushButton_Write_clicked()
{
    QFile file("D:/Qt/myProjects/QFile/QFile/myFile.txt");

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "File not open");
    }

    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void MainWindow::on_pushButton_Read_clicked()
{
    /*--- 1. static way to open file ---*/
    /*
     * QFile file("D:/Qt/myProjects/QFile/QFile/myFile.txt");
     */

    /*--- 2. dynamic way to open file ---*/

    /*--- 3. use filter ---*/
    QString filter = "All File (*.*) ;; Text File (*.txt) ;; XML File (*.xml)";

    QString file_name = QFileDialog::getOpenFileName(this, "open a file", "C://", filter);
    QFile file(file_name);

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "File not open");
    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();
}




