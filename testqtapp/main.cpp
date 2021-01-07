#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel *label = new QLabel("hellow world");
    label->resize(400,400);
    label->setWindowTitle("Punchline Dashboard");
    label->show();

    return a.exec();
}
