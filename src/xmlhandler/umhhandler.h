#ifndef UMHHANDLER_H
#define UMHHANDLER_H

#include "xmlhandler.h"

struct UMH_t{
    //structura de accion/evento con su widget
    WidgetPCB_t w;
    UMF_t umf;
};

class UMHhandler : public XMLhandler
{
public:
    UMHhandler(QString fp) : XMLhandler(fp){}
    ~UMHhandler();

    enum widgets_t {leds,relays,pulsador,llaves,displays,widgetCount};

    void Write();
    void Read();

    void RemovePCB();

    void SetUMH(UMH_t u, QDomElement root);
    void SetWidget(widgets_t type, WidgetPCB_t w, QDomElement root);

    void AddWidget(widgets_t type, WidgetPCB_t w);

    void AppendUMH(UMH_t u){m_umh.append(u);}


private:
    QDomDocument m_doc;

    QVector<UMH_t> m_umh;

    QVector<QString> m_ids;
    QVector<WidgetPCB_t> m_ListLeds;
    QVector<WidgetPCB_t> m_ListRelays;
    QVector<WidgetPCB_t> m_ListPulsadores;
    QVector<WidgetPCB_t> m_ListLlaves;
    QVector<WidgetPCB_t> m_ListDisplays;


};

#endif // UMHHANDLER_H
