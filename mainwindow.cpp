#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<dialog.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    mostrar = new Dialog(this);
    mostrar->hide();
    connect(mostrar,SIGNAL(finished(int)),this,SLOT(close()));
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),mostrar,SLOT(llamarindex(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbcerrar_clicked()
{
    close();
}

void MainWindow::on_pbver_clicked()
{
    mostrar->show();
}

//void MainWindow::on_comboBox_currentIndexChanged(int index)
//{
//    receive = index;
//}



