#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<dialog.h>
class Dialog;

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Dialog *mostrar;
//    int receive;
//    int ptrindex;

private slots:
    void on_pbcerrar_clicked();
    void on_pbver_clicked();


//    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
