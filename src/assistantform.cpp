#include "assistantform.h"
#include "ui_assistantform.h"

AssistantForm::AssistantForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AssistantForm)
{
    ui->setupUi(this);
    ui->pathInput->setHidden(true);
    ui->searchPath->setHidden(true);

}

AssistantForm::~AssistantForm()
{
    delete ui;
}

void AssistantForm::on_siguiente_clicked()
{
    switch(m_state){
    case start:
        m_state = dir;
        ui->titleLabel->setHidden(true);
        ui->descripcionLabel->setText("Seleccione el path del nuevo proyecto.");
        ui->pathInput->setHidden(false);
        ui->searchPath->setHidden(false);
        ui->siguiente->setEnabled(false);
        ui->descripcionLabel->setGeometry(50,50,500,100);
        break;
    case dir:
        m_state = confirm;
        m_umhPath = ui->pathInput->text();
        ui->descripcionLabel->setText(QString("A continuación se creará:\n- Un archivo uModelHardware (umh)\n- Un archivo PCB (pcb)\nEn el siguiente path: %1").arg(m_umhPath));
        ui->pathInput->setHidden(true);
        ui->searchPath->setHidden(true);
        break;
    case confirm:
        emit confirmSignal();
        break;
    default:
        break;
    }
}


void AssistantForm::on_pushButton_clicked()
{
    close();
}


void AssistantForm::on_searchPath_clicked()
{
    QString path = QFileDialog::getSaveFileName(nullptr, "Crear archivo UMH",  "", "Archivos UMH (*.umh)");
    if(!path.isEmpty()){
        ui->pathInput->setText(path);
        ui->siguiente->setEnabled(true);
    }
}

