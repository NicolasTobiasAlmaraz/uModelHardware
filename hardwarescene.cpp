#include "hardwarescene.h"

HardwareScene::HardwareScene(QWidget *pcb): QGraphicsView(pcb) {
    m_scene = new QGraphicsScene(pcb);
    setScene(m_scene);
    setSceneRect(0,0,pcb->width(),pcb->height());
}

//Creo widgets
void HardwareScene::crearRelay(WidgetPCB_t relay, int x, int y) {
    //Me fijo con que foto inicializo
    QString path;
    if(relay.data==1)
        path=IMAGE_RELAY_ON;
    else
        path=IMAGE_RELAY_OFF;
    QPixmap pixmap(path);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(pixmap);
    item->setFlag(QGraphicsItem::ItemIsMovable); //Puedo hacer que se arrastren o no
    item->setPos(x, y);
    item->setToolTip(relay.descripcion);
    m_scene->addItem(item);
    relay.ptr = item;
    m_ListRelays.append(relay);
}

void HardwareScene::crearLed(WidgetPCB_t led, int x, int y) {
    QString path;
    if(led.data==1)
        path=IMAGE_LED_ON;
    else
        path=IMAGE_LED_OFF;
    QPixmap pixmap(path);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(pixmap);
    item->setFlag(QGraphicsItem::ItemIsMovable); //Puedo hacer que se arrastren o no
    item->setPos(x, y);
    item->setToolTip(led.descripcion);
    m_scene->addItem(item);
    led.ptr = item;
    m_ListLeds.append(led);
}

void HardwareScene::crearPulsador(WidgetPCB_t pulsador, int x, int y) {
    QString path;
    if(pulsador.data==1)
        path=IMAGE_PULSADOR_ON;
    else
        path=IMAGE_PULSADOR_OFF;
    QPixmap pixmap(path);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(pixmap);
    item->setFlag(QGraphicsItem::ItemIsMovable); //Puedo hacer que se arrastren o no
    item->setPos(x, y);
    item->setToolTip(pulsador.descripcion);
    m_scene->addItem(item);
    pulsador.ptr = item;
    m_ListPulsadores.append(pulsador);
}

void HardwareScene::crearLlave(WidgetPCB_t llave, int x, int y) {
    QString path;
    if(llave.data==1)
        path=IMAGE_LLAVE_ON;
    else
        path=IMAGE_LLAVE_OFF;
    QPixmap pixmap(path);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(pixmap);
    item->setFlag(QGraphicsItem::ItemIsMovable); //Puedo hacer que se arrastren o no
    item->setPos(x, y);
    item->setToolTip(llave.descripcion);
    m_scene->addItem(item);
    llave.ptr = item;
    m_ListLlaves.append(llave);
}

void HardwareScene::crearDisplay(WidgetPCB_t display, int x, int y) {
    if(display.data>9||display.data<0)
        return;
    QString path(IMAGE_DISPLAY[display.data]);
    QPixmap pixmap(path);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(pixmap);
    item->setFlag(QGraphicsItem::ItemIsMovable); //Puedo hacer que se arrastren o no
    item->setPos(x, y);
    item->setToolTip(display.descripcion);
    m_scene->addItem(item);
    display.ptr = item;
    m_ListDisplays.append(display);
}

//Interacciono con los widgets

void HardwareScene::digitalWidgetOn(QVector<WidgetPCB_t> lista, int id, QString imgOn){
    for(int i=0; i<lista.length(); i++) {
        WidgetPCB_t aux = lista.at(i);
        if( aux.id==id ) {
            aux.ptr->setPixmap(QPixmap(imgOn));
            aux.data=1;
            break;
        }
    }
}

void HardwareScene::digitalWidgetOff(QVector<WidgetPCB_t> lista, int id, QString imgOff){
    for(int i=0; i<lista.length(); i++) {
        WidgetPCB_t aux = lista.at(i);
        if( aux.id==id ) {
            aux.ptr->setPixmap(QPixmap(imgOff));
            aux.data=0;
            break;
        }
    }
}

void HardwareScene::encenderLed(int id) {
    digitalWidgetOn(m_ListLeds, id, IMAGE_LED_ON);
}

void HardwareScene::apagarLed(int id) {
    digitalWidgetOff(m_ListLeds, id, IMAGE_LED_OFF);
}

void HardwareScene::presionarPulsador(int id) {
    digitalWidgetOn(m_ListPulsadores, id, IMAGE_PULSADOR_ON);
}

void HardwareScene::soltarPulsador(int id) {
    digitalWidgetOff(m_ListPulsadores, id, IMAGE_PULSADOR_OFF);
}

void HardwareScene::pegarRelay(int id) {
    digitalWidgetOn(m_ListRelays, id, IMAGE_RELAY_ON);
}

void HardwareScene::despegarRelay(int id) {
    digitalWidgetOff(m_ListRelays, id, IMAGE_RELAY_OFF);
}

void HardwareScene::llaveAbierta(int id) {
    digitalWidgetOn(m_ListLlaves, id, IMAGE_LLAVE_ON);
}

void HardwareScene::llaveCerrada(int id) {
    digitalWidgetOff(m_ListLlaves, id, IMAGE_LLAVE_OFF);
}

void HardwareScene::setDisplay(int id, char num) {
    if(num>9||num<0)
        return;
    for(int i=0; i<m_ListDisplays.length(); i++) {
        WidgetPCB_t aux = m_ListDisplays.at(i);
        if( aux.id==id ) {
            QString path(IMAGE_DISPLAY[num]);
            aux.ptr->setPixmap(QPixmap(path));
            aux.data=0;
            break;
        }
    }
}
