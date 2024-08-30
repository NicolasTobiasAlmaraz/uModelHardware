#ifndef UMFHANDLER_H
#define UMFHANDLER_H

#include "xmlhandler.h"

class UMFhandler : public XMLhandler
{
public:
    UMFhandler(QString fp) : XMLhandler(fp){}

    void Read();

    QVector<UMF_t> getAcciones(){ return m_acciones;}
    QVector<UMF_t> getEventos(){ return m_eventos;}

    void ClearDoc(){m_doc.clear();}

    QString CreateId();
    bool IdExists(QString s);

private:

    QDomDocument m_doc;

    QVector<QString> m_ids;
    QVector<UMF_t> m_acciones;
    QVector<UMF_t> m_eventos;
};

#endif // UMFHANDLER_H
