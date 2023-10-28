#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::parsearXml(QString path) {
    //Leo el XML
    m_XMLParser = new XMLParser("D:/UTN/uModelFactory/uModelHardware/pcbWidgets.xml");
    QVector<WidgetPCB_t> leds = m_XMLParser->getListLeds();
    QVector<WidgetPCB_t> relays = m_XMLParser->getListRelays();
    QVector<WidgetPCB_t> pulsadores = m_XMLParser->getListPulsadores();
    QVector<WidgetPCB_t> llaves = m_XMLParser->getListLlaves();
    QVector<WidgetPCB_t> displays = m_XMLParser->getListDisplays();

    // Le paso a la clase de gráficos el widget donde los tiene que dibujar
    m_pcb = new HardwareScene(ui->W_escena);

    // Le voy diciendo que agruegue los leds
    int i=0;
    while( leds.length() ) {
        WidgetPCB_t led = leds.front();
        leds.pop_front();
        m_pcb->crearLed(led, led.posX,led.posY);
        i++;
    }

    // Le voy diciendo que agruegue los relays
    i=0;
    while( relays.length() ) {
        WidgetPCB_t relay = relays.front();
        relays.pop_front();
        m_pcb->crearRelay(relay, relay.posX,relay.posY);
        i++;
    }

    // Le voy diciendo que agruegue los pulsadores
    i=0;
    while( pulsadores.length() ) {
        WidgetPCB_t pulsador = pulsadores.front();
        pulsadores.pop_front();
        m_pcb->crearPulsador(pulsador, pulsador.posX,pulsador.posY);
        i++;
    }

    //Le voy diciendo que agregue las llaves
    i=0;
    while( llaves.length() ) {
        WidgetPCB_t llave = llaves.front();
        llaves.pop_front();
        m_pcb->crearLlave(llave, llave.posX, llave.posY);
        i++;
    }

    //Le voy diciendo que agregue los displays
    i=0;
    while( displays.length() ) {
        WidgetPCB_t display = displays.front();
        displays.pop_front();
        m_pcb->crearDisplay(display, display.posX, display.posY);
        i++;
    }
    m_pcb->show();
}

void MainWindow::on_PB_ledOn_clicked() {
    int id = ui->SB_led->value();
    m_pcb->encenderLed(id);
}


void MainWindow::on_PB_ledOff_clicked() {
    int id = ui->SB_led->value();
    m_pcb->apagarLed(id);
}


void MainWindow::on_PB_relayOn_clicked() {
    int id = ui->SB_relay->value();
    m_pcb->pegarRelay(id);
}


void MainWindow::on_PB_relayOff_clicked() {
    int id = ui->SB_relay->value();
    m_pcb->despegarRelay(id);
}


void MainWindow::on_PB_pulsadorOn_clicked() {
    int id = ui->SB_pulsador->value();
    m_pcb->presionarPulsador(id);
}


void MainWindow::on_PB_pulsadorOff_clicked() {
    int id = ui->SB_pulsador->value();
    m_pcb->soltarPulsador(id);
}

void MainWindow::on_PB_llaveOn_clicked() {
    int id = ui->SB_llave->value();
    m_pcb->llaveCerrada(id);
}


void MainWindow::on_PB_llaveOff_clicked() {
    int id = ui->SB_llave->value();
    m_pcb->llaveAbierta(id);
}


void MainWindow::on_PB_display_clicked() {
    int id = ui->SB_display->value();
    int value = ui->SB_displayValue->value();
    m_pcb->setDisplay(id,(char)value);
}

void MainWindow::on_actionAbrir_triggered() {
    QString path = QFileDialog::getOpenFileName(nullptr,"Selecciona un archivo XML","","XML Files (*.xml)");
    parsearXml(path);
}
