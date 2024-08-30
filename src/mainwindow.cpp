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
    m_umf = new UMFhandler(path);
    m_umf->Read();

    addItemsListWidget2();

}


void MainWindow::on_actionAbrirPCB_triggered()
{
    QString path = QFileDialog::getOpenFileName(nullptr, "Abrir archivo PCB",  "", "Archivos PCB (*.pcb)");
    m_pcb = new PCBhandler(path);
    m_pcb->Read();

    //habilito cada accion que depende de abrir un pcb
    ui->actionAbrirUMF->setEnabled(m_pcb != nullptr);
    ui->actionAbrirProyectoUMH->setEnabled(m_pcb != nullptr);
    ui->actionGuardarPCB->setEnabled(m_pcb != nullptr);
    ui->toolBar->setEnabled(m_pcb != nullptr);
    ui->menuLimpiar->setEnabled(m_pcb != nullptr);
    ui->menuGuardar->setEnabled(m_pcb != nullptr);
    ui->actionRooteo->setEnabled(m_pcb != nullptr);
    ui->actionSimulaci_n->setEnabled(m_pcb != nullptr);
    ui->actionConfiguraci_n->setEnabled(m_pcb != nullptr);

    ui->actionDebug->setEnabled(m_pcb != nullptr);
    m_form = new Form();

    addItemsListWidget();

}


void MainWindow::on_actionAbrirProyectoUMH_triggered()
{
    QString path = QFileDialog::getOpenFileName(nullptr, "Abrir archivo UMH",  "", "Archivos UMH (*.umh)");
    m_umh = new UMHhandler(path);
    m_umh->Read();
}


void MainWindow::on_actionDebug_triggered()
{
    m_form->show();
}

void MainWindow::addItemsListWidget(){
    QListWidget *listWidget = m_form->getListWidget();

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











