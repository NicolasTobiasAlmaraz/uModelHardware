#include "pcbhandler.h"

PCBhandler::~PCBhandler() {}

void PCBhandler::SetLed(WidgetPCB_t w, QDomElement root){

    QDomElement parent,initState,posX,posY,nombre,descripcion,ancho,alto;

    parent = m_doc.createElement("Led");
    parent.setAttribute("id",w.id);


    initState = m_doc.createElement("InitState");
    initState.appendChild(m_doc.createTextNode("0"));
    parent.appendChild(initState);

    posX = m_doc.createElement("PosX");
    posX.appendChild(m_doc.createTextNode(QString::number(w.posX)));
    parent.appendChild(posX);

    posY = m_doc.createElement("PosY");
    posY.appendChild(m_doc.createTextNode(QString::number(w.posY)));
    parent.appendChild(posY);

    nombre = m_doc.createElement("Nombre");
    nombre.appendChild(m_doc.createTextNode(w.nombre));
    parent.appendChild(nombre);

    descripcion = m_doc.createElement("Descripcion");
    descripcion.appendChild(m_doc.createTextNode(w.descripcion));
    parent.appendChild(descripcion);

    ancho = m_doc.createElement("Ancho");
    ancho.appendChild(m_doc.createTextNode(QString::number(w.ancho)));
    parent.appendChild(ancho);

    alto = m_doc.createElement("Alto");
    ancho.appendChild(m_doc.createTextNode(QString::number(w.alto)));
    parent.appendChild(alto);

    root.appendChild(parent);
}

void PCBhandler::SetRelay(WidgetPCB_t w, QDomElement root){

    QDomElement parent,initState,posX,posY,nombre,descripcion,ancho,alto;

    parent = m_doc.createElement("Relay");
    parent.setAttribute("id",w.id);

    initState = m_doc.createElement("InitState");
    initState.appendChild(m_doc.createTextNode("0"));
    parent.appendChild(initState);

    posX = m_doc.createElement("PosX");
    posX.appendChild(m_doc.createTextNode(QString::number(w.posX)));
    parent.appendChild(posX);

    posY = m_doc.createElement("PosY");
    posY.appendChild(m_doc.createTextNode(QString::number(w.posY)));
    parent.appendChild(posY);

    nombre = m_doc.createElement("Nombre");
    nombre.appendChild(m_doc.createTextNode(w.nombre));
    parent.appendChild(nombre);

    descripcion = m_doc.createElement("Descripcion");
    descripcion.appendChild(m_doc.createTextNode(w.descripcion));
    parent.appendChild(descripcion);

    ancho = m_doc.createElement("Ancho");
    ancho.appendChild(m_doc.createTextNode(QString::number(w.ancho)));
    parent.appendChild(ancho);

    alto = m_doc.createElement("Alto");
    ancho.appendChild(m_doc.createTextNode(QString::number(w.alto)));
    parent.appendChild(alto);

    root.appendChild(parent);
}

void PCBhandler::SetPulsador(WidgetPCB_t w, QDomElement root){

    QDomElement parent,initState,posX,posY,nombre,descripcion,ancho,alto;

    parent = m_doc.createElement("Pulsador");
    parent.setAttribute("id",w.id);

    initState = m_doc.createElement("InitState");
    initState.appendChild(m_doc.createTextNode("0"));
    parent.appendChild(initState);

    posX = m_doc.createElement("PosX");
    posX.appendChild(m_doc.createTextNode(QString::number(w.posX)));
    parent.appendChild(posX);

    posY = m_doc.createElement("PosY");
    posY.appendChild(m_doc.createTextNode(QString::number(w.posY)));
    parent.appendChild(posY);

    nombre = m_doc.createElement("Nombre");
    nombre.appendChild(m_doc.createTextNode(w.nombre));
    parent.appendChild(nombre);

    descripcion = m_doc.createElement("Descripcion");
    descripcion.appendChild(m_doc.createTextNode(w.descripcion));
    parent.appendChild(descripcion);

    ancho = m_doc.createElement("Ancho");
    ancho.appendChild(m_doc.createTextNode(QString::number(w.ancho)));
    parent.appendChild(ancho);

    alto = m_doc.createElement("Alto");
    ancho.appendChild(m_doc.createTextNode(QString::number(w.alto)));
    parent.appendChild(alto);

    root.appendChild(parent);
}

void PCBhandler::SetLlaves(WidgetPCB_t w, QDomElement root){

    QDomElement parent,initState,posX,posY,nombre,descripcion,ancho,alto;

    parent = m_doc.createElement("Llave");
    parent.setAttribute("id",w.id);

    initState = m_doc.createElement("InitState");
    initState.appendChild(m_doc.createTextNode("0"));
    parent.appendChild(initState);

    posX = m_doc.createElement("PosX");
    posX.appendChild(m_doc.createTextNode(QString::number(w.posX)));
    parent.appendChild(posX);

    posY = m_doc.createElement("PosY");
    posY.appendChild(m_doc.createTextNode(QString::number(w.posY)));
    parent.appendChild(posY);

    nombre = m_doc.createElement("Nombre");
    nombre.appendChild(m_doc.createTextNode(w.nombre));
    parent.appendChild(nombre);

    descripcion = m_doc.createElement("Descripcion");
    descripcion.appendChild(m_doc.createTextNode(w.descripcion));
    parent.appendChild(descripcion);

    ancho = m_doc.createElement("Ancho");
    ancho.appendChild(m_doc.createTextNode(QString::number(w.ancho)));
    parent.appendChild(ancho);

    alto = m_doc.createElement("Alto");
    ancho.appendChild(m_doc.createTextNode(QString::number(w.alto)));
    parent.appendChild(alto);

    root.appendChild(parent);
}

void PCBhandler::SetDisplay(WidgetPCB_t w, QDomElement root){

    QDomElement parent,initState,posX,posY,nombre,descripcion,ancho,alto;

    parent = m_doc.createElement("Display");
    parent.setAttribute("id",w.id);

    initState = m_doc.createElement("InitState");
    initState.appendChild(m_doc.createTextNode("0"));
    parent.appendChild(initState);

    posX = m_doc.createElement("PosX");
    posX.appendChild(m_doc.createTextNode(QString::number(w.posX)));
    parent.appendChild(posX);

    posY = m_doc.createElement("PosY");
    posY.appendChild(m_doc.createTextNode(QString::number(w.posY)));
    parent.appendChild(posY);

    nombre = m_doc.createElement("Nombre");
    nombre.appendChild(m_doc.createTextNode(w.nombre));
    parent.appendChild(nombre);

    descripcion = m_doc.createElement("Descripcion");
    descripcion.appendChild(m_doc.createTextNode(w.descripcion));
    parent.appendChild(descripcion);

    ancho = m_doc.createElement("Ancho");
    ancho.appendChild(m_doc.createTextNode(QString::number(w.ancho)));
    parent.appendChild(ancho);

    alto = m_doc.createElement("Alto");
    ancho.appendChild(m_doc.createTextNode(QString::number(w.alto)));
    parent.appendChild(alto);

    root.appendChild(parent);
}

void PCBhandler::Write(){

    //creo raiz y lo añado al file
    m_doc.clear();

    QDomElement root = m_doc.createElement("pcbWidgets");
    m_doc.appendChild(root);



    for(int w=0; w<widgets_t::widgetCount;w++){
        QVector<WidgetPCB_t> aux;
        switch(w){
        case widgets_t::leds:
            aux = getListLeds();
            for(int i=0;i<aux.length();i++){
                SetLed(aux[i], root);
            }
            aux.clear();
            break;
        case widgets_t::relays:
            aux = getListRelays();
            for(int i=0;i<aux.length();i++){
                SetRelay(aux[i], root);
            }
            aux.clear();
            break;
        case widgets_t::pulsador:
            aux = getListPulsadores();
            for(int i=0;i<aux.length();i++){
                SetPulsador(aux[i], root);
            }
            aux.clear();
            break;
        case widgets_t::llaves:
            aux = getListLlaves();
            for(int i=0;i<aux.length();i++){
                SetLlaves(aux[i], root);
            }
            aux.clear();
            break;
        case widgets_t::displays:
            aux = getListDisplays();
            for(int i=0;i<aux.length();i++){
                SetDisplay(aux[i], root);
            }
            aux.clear();
            break;
        default:
            break;
        }
    }

    //abro archivo para escribir
    QFile file_out(filePath);
    if (!file_out.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","No se pudo abrir el archivo");
        return;
    }

    //escribo y cierro
    QTextStream stream(&file_out);
    stream << m_doc.toString();

    file_out.close();
}

void PCBhandler::Read(){

    QFile f(filePath);
    if (!f.open(QIODevice::ReadOnly )){
        QMessageBox messageBox;
        messageBox.critical(0,"Error","No se pudo abrir el archivo");
        m_error = 1;
        return;
    }
    m_doc.clear();
    // Proceso todo
    m_doc.setContent(&f);
    f.close();

    // Tag raiz
    QDomElement root=m_doc.documentElement();

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
        miWidget.id = widget.attribute("id");

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
            if(Child.tagName()=="Ancho")
                miWidget.ancho=Child.firstChild().toText().data().toInt();
            if(Child.tagName()=="Alto")
                miWidget.alto=Child.firstChild().toText().data().toInt();
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
    return;
}

QString PCBhandler::CreateId(){
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

bool PCBhandler::IdExists(QString s){
    for(int i = 0; i<m_ids.length(); i++){
        if(m_ids[i]==s)
            return true;
    }
    return false;
}

void PCBhandler::AddWidget(int data,
                        QString nombre,
                        QString descripcion,
                        int posX,
                        int posY,
                        int ancho,
                        int alto,
                        widgets_t type){
    WidgetPCB_t w;

    w.id = CreateId();
    w.data = data;
    w.nombre = nombre;
    w.descripcion = descripcion;
    w.posX = posX;
    w.posY = posY;
    w.ancho = ancho;
    w.alto = alto;

    switch(type){
    case leds:
        m_ListLeds.append(w);
        break;
    case displays:
        m_ListDisplays.append(w);
        break;
    case pulsador:
        m_ListPulsadores.append(w);
        break;
    case llaves:
        m_ListLlaves.append(w);
        break;
    case relays:
        m_ListRelays.append(w);
        break;
    default:
        break;
    }

}
