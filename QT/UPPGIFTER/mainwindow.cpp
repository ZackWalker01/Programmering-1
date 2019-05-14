#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(summera()));

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::summera()
{
    QString t1= ui->rad->text();
    QString t2= ui->rad_2->text();
    double it1 = t1.toDouble();
    double it2 = t2.toDouble();
    double summa = it1 + it2;
    QString s = QString::number(summa);
    ui->summan->setText(s);
}
