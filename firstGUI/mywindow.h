#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>

namespace Ui {
class myWindow;
}

class myWindow : public QMainWindow
{
    Q_OBJECT//it allows the use of signal and slots for the gui application and also translates the GUI library to the c++ compilter
    //understandable code

public:
    explicit myWindow(QWidget *parent = 0);
    ~myWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::myWindow *ui;
};

#endif // MYWINDOW_H
