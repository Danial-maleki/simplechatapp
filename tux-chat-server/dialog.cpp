#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    init();
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnStart_clicked()
{
quint16 port = static_cast<quint16>(ui->spport->value());
server.setMessage(ui->txtMessage->text()+" ");
if(!server.listen(QHostAddress::Any,port)){
    QMessageBox::critical(this,"Error",server.errorString());
    return;
}
ui->lblstatus->setText("listening...");
enabledButtons();
changed();
}

void Dialog::on_btnStop_clicked()
{
server.close();
ui->lblstatus->setText("Closed");
enabledButtons();
}

void Dialog::next()
{
int i = ui->stackedWidget->currentIndex();
i++;
if(i>= ui->stackedWidget->count()) i=ui->stackedWidget->count()-1;
ui->stackedWidget->setCurrentIndex(i);
enabledButtons();
}

void Dialog::back()
{
    int i=ui->stackedWidget->currentIndex();
    i--;
    if(i<0) i=0;
    ui->stackedWidget->setCurrentIndex(i);
    enabledButtons();
}

void Dialog::changed()
{
ui->lblstatus->setText(QString("There are %1 clients connected").arg(server.count()));
}



void Dialog::init()
{
btnNext=new QPushButton("Next",this);
btnBcak=new QPushButton("Back",this);
ui->buttonBox->addButton(btnBcak,QDialogButtonBox::ButtonRole::AcceptRole);
ui->buttonBox->addButton(btnNext,QDialogButtonBox::ButtonRole::AcceptRole);



connect(btnBcak,&QPushButton::clicked,this,&Dialog::back);
connect(btnNext,&QPushButton::clicked,this,&Dialog::next);
connect(&server,&Server::changed,this,&Dialog::changed);
enabledButtons();


}

void Dialog::enabledButtons()
{
ui->btnStart->setEnabled(!server.isListening());
ui->btnStop->setEnabled(server.isListening());

if(ui->stackedWidget->count()<=1){
    btnBcak->setEnabled(false);
    btnNext->setEnabled(false);
    return;
}
if(ui->stackedWidget->currentIndex()==0){
    btnBcak->setEnabled(false);
    btnNext->setEnabled(true);
    return;
}
if(ui->stackedWidget->currentIndex()>=ui->stackedWidget->count() -1){
    btnBcak->setEnabled(true);
    btnNext->setEnabled(false);
    return;
}
}

