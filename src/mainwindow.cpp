#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAbrirUMF_triggered()
{
    QString path = QFileDialog::getOpenFileName(nullptr, "Abrir archivo UMF",  "", "Archivos UMF (*.umf)");
    if(!path.isEmpty()){
        m_umf = new UMFhandler(path);
        m_umf->Read();
        addItemsListWidget2();
    }
}


void MainWindow::on_actionAbrirPCB_triggered()
{
    QString path = QFileDialog::getOpenFileName(nullptr, "Abrir archivo PCB",  "", "Archivos PCB (*.pcb)");
    if(!path.isEmpty()){
        m_pcb = new PCBhandler(path);
        m_pcb->Read();
        EnableUi();
        addItemsListWidget();
    }
}


void MainWindow::on_actionAbrirProyectoUMH_triggered()
{
    QString path = QFileDialog::getOpenFileName(nullptr, "Abrir archivo UMH",  "", "Archivos UMH (*.umh)");
    if(!path.isEmpty()){
        m_umh = new UMHhandler(path);
        m_umh->Read();
        EnableUi();
        addItemsListWidget3();
    }
}


void MainWindow::on_actionDebug_triggered()
{
    m_form->show();
}

void MainWindow::addItemsListWidget(){
    QListWidget *listWidget = m_form->getListWidget();
    listWidget->clear();
    QVector<WidgetPCB_t> aux;
    for(int i=0; i<m_pcb->widgetCount;i++){
        switch(i){
        case m_pcb->displays:
            listWidget->addItem("Displays:");
            aux = m_pcb->getListDisplays();
            for(int j = 0; j<aux.length(); j++){
                listWidget->addItem(aux[j].nombre);
            }
            break;
        case m_pcb->relays:
            listWidget->addItem("Relays:");
            aux = m_pcb->getListRelays();
            for(int j = 0; j<aux.length(); j++){
                listWidget->addItem(aux[j].nombre);
            }
            break;
        case m_pcb->leds:
            listWidget->addItem("Leds:");
            aux = m_pcb->getListLeds();
            for(int j = 0; j<aux.length(); j++){
                listWidget->addItem(aux[j].nombre);
            }
            break;
        case m_pcb->pulsador:
            listWidget->addItem("Pulsador:");
            aux = m_pcb->getListPulsadores();
            for(int j = 0; j<aux.length(); j++){
                listWidget->addItem(aux[j].nombre);
            }
            break;
        case m_pcb->llaves:
            listWidget->addItem("Llaves:");
            aux = m_pcb->getListLlaves();
            for(int j = 0; j<aux.length(); j++){
                listWidget->addItem(aux[j].nombre);
            }
            break;
        default:
            break;
        }
    }
    listWidget->addItem("funciona!");
}

void MainWindow::addItemsListWidget2(){
    QListWidget *listWidget = m_form->getListWidget2();

    QVector<UMF_t> aux;
    for(int i=0; i<2;i++){
        switch(i){
        case 0:
            listWidget->addItem("Acciones:");
            aux = m_umf->getAcciones();
            for(int j = 0; j<aux.length(); j++){
                listWidget->addItem(aux[j].nombre);
            }
            break;
        case 1:
            listWidget->addItem("Eventos:");
            aux = m_umf->getEventos();
            for(int j = 0; j<aux.length(); j++){
                listWidget->addItem(aux[j].nombre);
            }
            break;
        default:
            break;
        }
    }
    listWidget->addItem("funciona!");
}

void MainWindow::addItemsListWidget3(){

}

void MainWindow::handleButtonClick(){
    m_pcb->AddWidget(0,"Led 1","led de test",0,0,10,10,PCBhandler::leds);
    addItemsListWidget();
}

void MainWindow::on_actionGuardarPCB_triggered()
{

}


void MainWindow::on_actionNuevoPCB_triggered()
{
    QString path = QFileDialog::getSaveFileName(nullptr, "Crear archivo PCB",  "", "Archivos PCB (*.pcb)");
    if(!path.isEmpty()){
        m_pcb = new PCBhandler(path);
        m_pcb->Write();
        EnableUi();
        addItemsListWidget();
    }



}


void MainWindow::on_actionGuardar_triggered()
{
    if(m_pcb!=nullptr)
        m_pcb->Write();
    if(m_umh!=nullptr)
        m_umh->Write();

}

void MainWindow::EnableUi(){
    bool enable = (m_pcb != nullptr||m_umh!=nullptr);
    ui->actionAbrirUMF->setEnabled(enable);
    ui->actionGuardarPCB->setEnabled(enable);
    ui->toolBar->setEnabled(enable);
    ui->menuLimpiar->setEnabled(enable);
    ui->menuGuardar->setEnabled(enable);
    ui->actionRooteo->setEnabled(enable);
    ui->actionSimulaci_n->setEnabled(enable);
    ui->actionConfiguraci_n->setEnabled(enable);
    ui->actionGuardar->setEnabled(enable);

    ui->actionDebug->setEnabled(enable);
    if (!m_form) {  // Only create new form if it doesn't exist
        m_form = new Form();
        connect(m_form, &Form::buttonClicked, this, &MainWindow::handleButtonClick);
    }
}

void MainWindow::on_actionNuevoProyectoUMH_triggered()
{
    QString path = QFileDialog::getSaveFileName(nullptr, "Crear archivo UMH",  "", "Archivos UMH (*.umh)");
    if(!path.isEmpty()){
        m_umh = new UMHhandler(path);
        m_umh->Write();
        EnableUi();
        addItemsListWidget3();
    }
}

