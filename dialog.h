#ifndef DIALOG_H
#define DIALOG_H
#include<mainwindow.h>
#include<QPixmap>
#include<QFileDialog>
#include<QMessageBox>
#include<QTextStream>
#include<QFile>
#include<QSound>

//class MainWindow;


#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    int receive;
    QSound *sound;



private slots:
    void on_pbsalir_clicked();
    void on_pbatras_clicked();
    void llamarindex(int x);
    void lion();

    void on_pbsonido_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
