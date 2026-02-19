/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
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
    QWidget *layoutWidget;
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
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 12, 791, 541));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txtServer = new QLineEdit(layoutWidget);
        txtServer->setObjectName(QString::fromUtf8("txtServer"));

        horizontalLayout->addWidget(txtServer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        listView = new QListView(layoutWidget);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 1, 0, 1, 2);

        txtMessage = new QLineEdit(layoutWidget);
        txtMessage->setObjectName(QString::fromUtf8("txtMessage"));

        gridLayout->addWidget(txtMessage, 3, 0, 1, 2);

        btnSend = new QPushButton(layoutWidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        gridLayout->addWidget(btnSend, 4, 0, 1, 1);

        lblID = new QLabel(layoutWidget);
        lblID->setObjectName(QString::fromUtf8("lblID"));

        gridLayout->addWidget(lblID, 2, 0, 1, 1);

        btnClose = new QPushButton(layoutWidget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        gridLayout->addWidget(btnClose, 4, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
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
