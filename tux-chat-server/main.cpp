#include "dialog.h"

#include <QApplication>
#include <QFile>
#include <QString>

QString readTextFile(QString path){
    QFile file(path);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        return in.readAll();
    }
    return "";
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString css = readTextFile(":/styles/style.css");
    if(css.length()>0){
        a.setStyleSheet(css);
    }
    Dialog w;
    w.show();
    return a.exec();
}


