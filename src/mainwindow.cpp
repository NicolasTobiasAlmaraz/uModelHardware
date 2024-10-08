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
        if(m_umf!=nullptr){
            delete m_umf;
            m_umf = nullptr;
        }
        m_umf = new UMFhandler(path);
        m_umf->Read();
        ui->actionVincular_UMF->setEnabled(true);
        addItemsListWidget2();
    }
}


void MainWindow::on_actionAbrirPCB_triggered()
{
    QString path = QFileDialog::getOpenFileName(nullptr, "Abrir archivo PCB",  "", "Archivos PCB (*.pcb)");
    if(!path.isEmpty()){
        if(m_pcb!=nullptr){
            delete m_pcb;
            m_pcb = nullptr;
        }
        m_pcb = new PCBhandler(path);
        m_pcb->Read();
        addItemsListWidget();
        ui->actionVincular_PCB->setEnabled(true);
        ui->actionDesvincular_PCB->setEnabled(true);
    }
}


void MainWindow::on_actionAbrirProyectoUMH_triggered()
{
    QString path = QFileDialog::getOpenFileName(nullptr, "Abrir archivo UMH",  "", "Archivos UMH (*.umh)");
    if(!path.isEmpty()){
        if(m_umh!=nullptr){
            delete m_umh;
            m_umh = nullptr;
        }
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
    listWidget->addItem("Existe PCB");
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
    listWidget->clear();
    listWidget->addItem("Existe UMF");
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
    QListWidget *listWidget = m_form->getListWidget3();
    listWidget->clear();
    listWidget->addItem("Existe UMH");
}

void MainWindow::handleButtonClick(){
    m_pcb->AddWidget(0,"Led 1","led de test",0,0,10,10,PCBhandler::leds);
    addItemsListWidget();
}

void MainWindow::on_actionGuardarPCB_triggered()
{
    if(m_pcb!=nullptr)
        m_pcb->Write();
}

void MainWindow::on_actionNuevoPCB_triggered()
{
    QString path = QFileDialog::getSaveFileName(nullptr, "Crear archivo PCB",  "", "Archivos PCB (*.pcb)");
    if(!path.isEmpty()){
        if(m_pcb!=nullptr){
            delete m_pcb;
            m_pcb = nullptr;
        }
        m_pcb = new PCBhandler(path);
        m_pcb->Write();
        addItemsListWidget();
        ui->actionVincular_PCB->setEnabled(true);
        ui->actionDesvincular_PCB->setEnabled(true);
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
    bool enable = (m_umh!=nullptr);
    ui->actionAbrirUMF->setEnabled(enable);
    ui->actionGuardarPCB->setEnabled(enable);
    ui->toolBar->setEnabled(enable);
    ui->menuLimpiar->setEnabled(enable);
    ui->menuGuardar->setEnabled(enable);
    ui->actionRooteo->setEnabled(enable);
    ui->actionSimulaci_n->setEnabled(enable);
    ui->actionConfiguraci_n->setEnabled(enable);
    ui->actionGuardar->setEnabled(enable);
    ui->actionAbrirPCB->setEnabled(enable);
    ui->actionNuevoPCB->setEnabled(enable);
    ui->actionDetener_Simulacion->setEnabled(false);

    ui->actionDebug->setEnabled(enable);
    if (m_form==nullptr) {
        m_form = new Form();
        connect(m_form, &Form::buttonClicked, this, &MainWindow::handleButtonClick);
    }
}

void MainWindow::on_actionGuardarProyectoUMH_triggered()
{

}


void MainWindow::on_actionIniciarSimulacionToolbar_triggered()
{
    //inicio simulacion
    //StartSim();

    //Cambio icono segun estado actual
    if(simulationPlaying){
        ui->actionIniciarSimulacionToolbar->setIcon(QIcon(":/images/play-button.png"));
    }else{
        ui->actionIniciarSimulacionToolbar->setIcon(QIcon(":/images/pause-button.png"));
    }
    ui->actionDetener_Simulacion->setEnabled(true);
    simulationPlaying = !simulationPlaying;
}



void MainWindow::on_actionVincular_PCB_triggered()
{
    if(m_umh!=nullptr&&m_pcb!=nullptr){
        QVector<WidgetPCB_t> aux_widget = m_pcb->getListLeds();
        for(int i = 0; i<aux_widget.length(); i++){
            m_umh->AddWidget(UMHhandler::leds,aux_widget[i]);
        }
        aux_widget = m_pcb->getListDisplays();
        for(int i = 0; i<aux_widget.length(); i++){
            m_umh->AddWidget(UMHhandler::displays,aux_widget[i]);
        }
        aux_widget = m_pcb->getListPulsadores();
        for(int i = 0; i<aux_widget.length(); i++){
            m_umh->AddWidget(UMHhandler::pulsador,aux_widget[i]);
        }
        aux_widget = m_pcb->getListLlaves();
        for(int i = 0; i<aux_widget.length(); i++){
            m_umh->AddWidget(UMHhandler::llaves,aux_widget[i]);
        }
        aux_widget = m_pcb->getListRelays();
        for(int i = 0; i<aux_widget.length(); i++){
            m_umh->AddWidget(UMHhandler::relays,aux_widget[i]);
        }
    }
}


void MainWindow::on_actionDesvincular_PCB_triggered()
{
    if(m_umh!=nullptr)
        m_umh->RemovePCB();
}


void MainWindow::on_actionVincular_UMF_triggered()
{
    QVector<UMF_t> acciones = m_umf->getAcciones();
    for(int i = 0; i<acciones.length(); i++){
        UMH_t aux;
        aux.umf = acciones[i];
        m_umh->AppendUMH(aux);
    }
}


void MainWindow::on_actionDetener_Simulacion_triggered()
{
    //detengo simulacion y la reinicio
    ui->actionDetener_Simulacion->setEnabled(false);
    ui->actionIniciarSimulacionToolbar->setIcon(QIcon(":/images/play-button.png"));
    simulationPlaying = 0;
}


void MainWindow::on_actionNuevo_triggered()
{
    m_assistant = new AssistantForm();
    connect(m_assistant, &AssistantForm::confirmSignal, this, &MainWindow::handleInput);
    m_assistant->show();
}

void MainWindow::handleInput(){
    if(m_assistant==nullptr){
        return;
    }
    QString umh = m_assistant->GetUMHPath();
    if(!umh.isEmpty()){
        if(m_umh!=nullptr){
            delete m_umh;
            m_umh = nullptr;
        }
        m_umh = new UMHhandler(umh);
        m_umh->Write();
        EnableUi();
        addItemsListWidget3();
    }
    m_assistant->close();
    delete m_assistant;
    m_assistant = nullptr;
}
