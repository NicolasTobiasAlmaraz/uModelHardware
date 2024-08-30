#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    listWidget = ui->listWidget;
}

Form::~Form()
{
    delete ui;
}

QListWidget* Form::getListWidget(){
    return listWidget;
}
