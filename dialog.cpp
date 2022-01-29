#include "dialog.h"
#include "ui_dialog.h"
#include<mainwindow.h>
#include<QPixmap>
#include<QFileDialog>
#include<QMessageBox>
#include<QSound>
#include<QTextStream>
#include<QFile>


class MainWindow;

//int ptrindex

Dialog::Dialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
//     receive = ptrindex;
//    regresar = new MainWindow(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pbsalir_clicked()
{
    close();
}

void Dialog::llamarindex(int x)
{
    receive = x;
    if (receive == 1)
    { lion(); }
}

void Dialog::on_pbatras_clicked()
{
//    regresar->show();
      this->hide();
}

void Dialog::lion()
{
//    QString u = QFileDialog::getOpenFileName(this, tr("D:\\Hermes\\Final1\\lion.PNG"),
//    "/home/", tr("Images (*.png *.xpm *.jpg)"));

    QPixmap pixmap;
    pixmap.load(":/lion.PNG");
//    ui->lfoto->setText(u);
//    QByteArray bytes;
//    QBuffer buffer(&bytes);
//    buffer.open(QIODevice::WriteOnly);
//    pixmap.save(&buffer, "PNG");


//    if (bytes.isNull() )
//    {
//        QMessageBox::warning(this, "Error","No se Puede ver la Imagen \n");
//    }
//    else
//    {
        ui->lfoto->setPixmap(pixmap);
//    }


    const QString fileName=":/lion.txt";
    QFile file(fileName);

file.open(QIODevice::ReadOnly | QIODevice::Text);

    if (!file.isOpen())
    { return; }

    else{
    QTextStream strin(&file);
    QString contenido;
    contenido=strin.readAll();
    //QString cont = QString::fromLatin1(file.readAll());
    ui->tedetalles->setText(contenido);
    file.flush();
    file.close();}

    sound = new QSound(":/lion.wav");
}

void Dialog::on_pbsonido_clicked()
{
    sound->play();
}
