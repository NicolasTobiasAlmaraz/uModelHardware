#ifndef HARDWARESCENE_H
#define HARDWARESCENE_H


#include <QtWidgets>

//Paths de las imagenes de los widgets
#define IMAGE_RELAY_ON      ":/images/RELAY_ON.png"
#define IMAGE_RELAY_OFF     ":/images/RELAY_OFF.png"

#define IMAGE_LED_ON        ":/images/LED_ON.png"
#define IMAGE_LED_OFF       ":/images/LED_OFF.png"

#define IMAGE_PULSADOR_ON   ":/images/PULSADOR_ON.png"
#define IMAGE_PULSADOR_OFF  ":/images/PULSADOR_OFF.png"

#define IMAGE_LLAVE_ON      ":/images/LLAVE_ON.png"
#define IMAGE_LLAVE_OFF     ":/images/LLAVE_OFF.png"

#define IMAGE_DISPLAY_0     ":/images/DISPLAY_0.png"
#define IMAGE_DISPLAY_1     ":/images/DISPLAY_1.png"
#define IMAGE_DISPLAY_2     ":/images/DISPLAY_2.png"
#define IMAGE_DISPLAY_3     ":/images/DISPLAY_3.png"
#define IMAGE_DISPLAY_4     ":/images/DISPLAY_4.png"
#define IMAGE_DISPLAY_5     ":/images/DISPLAY_5.png"
#define IMAGE_DISPLAY_6     ":/images/DISPLAY_6.png"
#define IMAGE_DISPLAY_7     ":/images/DISPLAY_7.png"
#define IMAGE_DISPLAY_8     ":/images/DISPLAY_8.png"
#define IMAGE_DISPLAY_9     ":/images/DISPLAY_9.png"

const QString IMAGE_DISPLAY[] = {
    IMAGE_DISPLAY_0,
    IMAGE_DISPLAY_1,
    IMAGE_DISPLAY_2,
    IMAGE_DISPLAY_3,
    IMAGE_DISPLAY_4,
    IMAGE_DISPLAY_5,
    IMAGE_DISPLAY_6,
    IMAGE_DISPLAY_7,
    IMAGE_DISPLAY_8,
    IMAGE_DISPLAY_9
};

struct WidgetPCB_t {
    int id;
    int data;
    QString nombre;
    QString descripcion;
    int posX;
    int posY;
    QGraphicsPixmapItem* ptr;
};

class HardwareScene : public QGraphicsView, public QObject  {
public:
    HardwareScene(QWidget *pcb);
    void crearRelay(WidgetPCB_t relay, int x, int y);
    void crearLed(WidgetPCB_t led, int x, int y);
    void crearPulsador(WidgetPCB_t pulsador, int x, int y);
    void crearLlave(WidgetPCB_t llave, int x, int y);
    void crearDisplay(WidgetPCB_t display, int x, int y);

    //Widgets
    void encenderLed(int id);
    void apagarLed(int id);

    void presionarPulsador(int id);
    void soltarPulsador(int id);

    void llaveAbierta(int id);
    void llaveCerrada(int id);

    void pegarRelay(int id);
    void despegarRelay(int id);

    void setDisplay(int id, char num);

private:
    void digitalWidgetOn(QVector<WidgetPCB_t> lista, int id, QString imgOn);
    void digitalWidgetOff(QVector<WidgetPCB_t> lista, int id, QString imgOff);

    QGraphicsScene* m_scene;
    QVector<WidgetPCB_t> m_ListLeds;
    QVector<WidgetPCB_t> m_ListRelays;
    QVector<WidgetPCB_t> m_ListPulsadores;
    QVector<WidgetPCB_t> m_ListLlaves;
    QVector<WidgetPCB_t> m_ListDisplays;

signals:
    void itemDobleClickeado(QGraphicsItem* item);
    void itemClickeado(QGraphicsItem* item);
    void itemArrastrado(QGraphicsItem* item);

public slots:
    void itemSeleccionado() {
        // Aquí puedes manejar la selección de items
        QList<QGraphicsItem*> itemsSeleccionados = m_scene->selectedItems();
        // Hacer algo con los items seleccionados
    }

    void itemClickeado(QGraphicsItem* item) {
        // Manejar el clic en el item
        // item es el item que ha sido clickeado
    }

    void itemArrastrado(QGraphicsItem* item) {
        // Manejar el arrastre del item
        // item es el item que ha sido arrastrado
    }

};

#endif // HARDWARESCENE_H
