#include "umfhandler.h"


void UMFhandler::Read(){

    QFile f(filePath);

    if(!f.open(QIODevice::ReadOnly)){
        QMessageBox messageBox;
        messageBox.critical(0,"Error","No se pudo abrir el archivo");
        return;
    }

    ClearDoc();
    m_doc.setContent(&f);
    f.close();

    QDomElement root = m_doc.documentElement();
    QDomElement element = root.firstChild().toElement();

    while(!element.isNull()){
        QString tag = element.tagName();

        if(tag=="acciones"){
            QDomElement child = element.firstChild().toElement();
            while(!child.isNull()){
                UMF_t aux;
                aux.id = CreateId();
                aux.nombre = child.text();
                aux.tipo = "accion";
                m_acciones.append(aux);

                child = child.nextSibling().toElement();
            }
        }
        else if(tag=="eventos"){
            QDomElement child = element.firstChild().toElement();
            while(!child.isNull()){
                UMF_t aux;
                aux.id = CreateId();
                aux.nombre = child.text();
                aux.tipo = "evento";
                m_eventos.append(aux);

                child = child.nextSibling().toElement();
            }
        }
        element = element.nextSibling().toElement();
    }
}

QString UMFhandler::CreateId(){
    int randomNumber = QRandomGenerator::global()->bounded(1000);
    QDateTime date = QDateTime::currentDateTime();
    QString ret = date.toString("yyyyMMddhhmmss");
    ret.append(QString("-%1").arg(randomNumber));
    while((IdExists(ret))){
        randomNumber = QRandomGenerator::global()->bounded(1000);
        date = QDateTime::currentDateTime();
        ret.append(QString("-%1").arg(randomNumber));
    }
    m_ids.append(ret);
    return ret;
}

bool UMFhandler::IdExists(QString s){
    for(int i = 0; i<m_ids.length(); i++){
        if(m_ids[i]==s)
            return true;
    }
    return false;
}
