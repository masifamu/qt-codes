/********************************************************************************
** Form generated from reading UI file 'mywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWINDOW_H
#define UI_MYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myWindow)
    {
        if (myWindow->objectName().isEmpty())
            myWindow->setObjectName(QStringLiteral("myWindow"));
        myWindow->resize(400, 300);
        centralWidget = new QWidget(myWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 100, 99, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 190, 281, 20));
        label->setAutoFillBackground(false);
        myWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        myWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        myWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        myWindow->setStatusBar(statusBar);

        retranslateUi(myWindow);

        QMetaObject::connectSlotsByName(myWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myWindow)
    {
        myWindow->setWindowTitle(QApplication::translate("myWindow", "myWindow", 0));
        pushButton->setText(QApplication::translate("myWindow", "PushButton", 0));
        label->setText(QApplication::translate("myWindow", "status", 0));
    } // retranslateUi

};

namespace Ui {
    class myWindow: public Ui_myWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWINDOW_H
