/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLineEdit *txtServer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListView *listView;
    QLineEdit *txtMessage;
    QPushButton *btnSend;
    QLabel *lblID;
    QPushButton *btnClose;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(2, 12, 791, 541));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout->addWidget(lineEdit_2);

        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        txtServer = new QLineEdit(widget);
        txtServer->setObjectName("txtServer");

        horizontalLayout->addWidget(txtServer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        listView = new QListView(widget);
        listView->setObjectName("listView");

        gridLayout->addWidget(listView, 1, 0, 1, 2);

        txtMessage = new QLineEdit(widget);
        txtMessage->setObjectName("txtMessage");

        gridLayout->addWidget(txtMessage, 3, 0, 1, 2);

        btnSend = new QPushButton(widget);
        btnSend->setObjectName("btnSend");

        gridLayout->addWidget(btnSend, 4, 0, 1, 1);

        lblID = new QLabel(widget);
        lblID->setObjectName("lblID");

        gridLayout->addWidget(lblID, 2, 0, 1, 1);

        btnClose = new QPushButton(widget);
        btnClose->setObjectName("btnClose");

        gridLayout->addWidget(btnClose, 4, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Server:", nullptr));
        txtServer->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        btnSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        lblID->setText(QCoreApplication::translate("MainWindow", "Your Id", nullptr));
        btnClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
