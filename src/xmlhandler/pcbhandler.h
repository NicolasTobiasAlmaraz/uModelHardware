#ifndef PCBHANDLER_H
#define PCBHANDLER_H

#include "xmlhandler.h"

class PCBhandler : public XMLhandler
{
public:
    PCBhandler(QString fp) : XMLhandler(fp){}
    ~PCBhandler();

    void Write();
    void Read();

    enum widgets_t {leds,relays,pulsador,llaves,displays,widgetCount};

    inline QVector<WidgetPCB_t> getListLeds() {return m_ListLeds;}
    inline QVector<WidgetPCB_t> getListRelays() {return m_ListRelays;}
    inline QVector<WidgetPCB_t> getListPulsadores() {return m_ListPulsadores;}
    inline QVector<WidgetPCB_t> getListLlaves() {return m_ListLlaves;}
    inline QVector<WidgetPCB_t> getListDisplays() {return m_ListDisplays;}

    void SetLed(WidgetPCB_t w, QDomElement root);
    void SetRelay(WidgetPCB_t w, QDomElement root);
    void SetPulsador(WidgetPCB_t w, QDomElement root);
    void SetLlaves(WidgetPCB_t w, QDomElement root);
    void SetDisplay(WidgetPCB_t w, QDomElement root);

    void ClearDoc(){m_doc.clear();}

    QString CreateId();
    bool IdExists(QString s);

    void AddWidget(int data,
                    QString nombre,
                    QString descripcion,
                    int posX,
                    int posY,
                    int ancho,
                    int alto,
                    widgets_t type);

private:

    QDomDocument m_doc;

    bool m_error = 0;

    QVector<QString> m_ids;
    QVector<WidgetPCB_t> m_ListLeds;
    QVector<WidgetPCB_t> m_ListRelays;
    QVector<WidgetPCB_t> m_ListPulsadores;
    QVector<WidgetPCB_t> m_ListLlaves;
    QVector<WidgetPCB_t> m_ListDisplays;

};

#endif // PCBHANDLER_H
