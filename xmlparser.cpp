#include "xmlparser.h"

XMLParser::XMLParser(const QString& filePath) {
    parsear(filePath);
}

void XMLParser::parsear(const QString& filePath) {
    // Abro archivo
    QDomDocument xmlPCB;
    QFile f(filePath);
    if (!f.open(QIODevice::ReadOnly ))
        return;

    // Proceso todo
    xmlPCB.setContent(&f);
    f.close();

    // Tag raiz
    QDomElement root=xmlPCB.documentElement();

    // Obtengo los tags dentro de la raiz
    QDomElement widget=root.firstChild().toElement();

    // Obtengo datos del widget
    while(!widget.isNull()) {

        //Me fijo si es un widget conocido sino lo salteo
        QString tag = widget.tagName();
        if(tag!="Relay"&&tag!="Pulsador"&&tag!="Led"&&tag!="Llave"&&tag!="Display") {
            widget = widget.nextSibling().toElement();
            continue;
        }

        WidgetPCB_t miWidget;

        //Guardo el atributo id
        miWidget.id = widget.attribute("id").toInt();

        // Entro al tag del widget y obtengo los tags nombre y data
        QDomElement Child=widget.firstChild().toElement();
        while (!Child.isNull()) {
            //Guardo nombre
            if (Child.tagName()=="Nombre")
                miWidget.nombre=Child.firstChild().toText().data();
            //Guardo dato
            if (Child.tagName()=="InitState")
                miWidget.data=Child.firstChild().toText().data().toInt();
            if(Child.tagName()=="Descripcion")
                miWidget.descripcion=Child.firstChild().toText().data();
            if(Child.tagName()=="PosX")
                miWidget.posX=Child.firstChild().toText().data().toInt();
            if(Child.tagName()=="PosY")
                miWidget.posY=Child.firstChild().toText().data().toInt();
            // Avanzo al siguiente tag
            Child = Child.nextSibling().toElement(); 
        }

        //Valido ID, si está repetido no lo agrega
        for(int i=0; i<m_ids.length(); i++) {
           if(miWidget.id==m_ids.at(i))
               return;
        }

        m_ids.append(miWidget.id);

        if(tag=="Led")
            m_ListLeds.append(miWidget);
        if(tag=="Relay")
            m_ListRelays.append(miWidget);
        if(tag=="Pulsador")
            m_ListPulsadores.append(miWidget);
        if(tag=="Llave")
            m_ListLlaves.append(miWidget);
        if(tag=="Display")
            m_ListDisplays.append(miWidget);

        // Siguiente widget
        widget = widget.nextSibling().toElement();
    }
}
