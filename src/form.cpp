#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    listWidget = ui->listWidget;
    listWidget2 = ui->listWidget_2;
    listWidget3 = ui->listWidget_3;
}

Form::~Form()
{
    delete ui;
}

QListWidget* Form::getListWidget(){
    return listWidget;
}

QListWidget* Form::getListWidget2(){
    return listWidget2;
}

QListWidget* Form::getListWidget3(){
    return listWidget3;
}
