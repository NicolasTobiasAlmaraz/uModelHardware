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



    void Write();
    void Read();

    void SetUMH(UMH_t u, QDomElement root);

private:
    QDomDocument m_doc;

    QVector<UMH_t> m_umh;

};

#endif // UMHHANDLER_H
