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
    QListWidget *listWidget = m_form->getListWidget();

    listWidget->addItem("funciona!");

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

