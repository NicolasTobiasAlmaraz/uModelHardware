#include "umhhandler.h"

UMHhandler::~UMHhandler() {}

void UMHhandler::Write(){
    //Creo raiz y la añado
    m_doc.clear();
    QDomElement root = m_doc.createElement("Raiz");
    m_doc.appendChild(root);

    QDomElement pcb = m_doc.createElement("PCB");

    for(int i = 0; i<m_ListLeds.length(); i++){
        SetWidget(leds,m_ListLeds[i],pcb);
    }
    for(int i = 0; i<m_ListDisplays.length(); i++){
        SetWidget(displays,m_ListDisplays[i],pcb);
    }
    for(int i = 0; i<m_ListRelays.length(); i++){
        SetWidget(relays,m_ListRelays[i],pcb);
    }
    for(int i = 0; i<m_ListLlaves.length(); i++){
        SetWidget(llaves,m_ListLlaves[i],pcb);
    }
    for(int i = 0; i<m_ListPulsadores.length(); i++){
        SetWidget(pulsador,m_ListPulsadores[i],pcb);
    }

    root.appendChild(pcb);

    QDomElement umh = m_doc.createElement("UMH");

    //itero cada item accion-widget y lo seteo
    for(int i = 0; i<m_umh.length();i++){
        SetUMH(m_umh[i],umh);
    }

    root.appendChild(umh);

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

void UMHhandler::Read(){
    QFile f(filePath);
    if (!f.open(QIODevice::ReadOnly )){
        QMessageBox messageBox;
        messageBox.critical(0,"Error","No se pudo abrir el archivo");
        return;
    }

    m_doc.clear();
    m_doc.setContent(&f);
    f.close();

    QDomElement root = m_doc.documentElement();

    QDomElement firstChild = root.firstChild().toElement();

    while(!firstChild.isNull()){
        if(firstChild.tagName()!="UMH"&&firstChild.tagName()!="PCB"){
            firstChild = firstChild.nextSibling().toElement();
            continue;
        }
        if(firstChild.tagName()=="PCB"){
            QDomElement pcbChild = firstChild.firstChild().toElement();
            while(!pcbChild.isNull()){
                QString pcbTag = pcbChild.tagName();
                QDomElement pcbChild_Element = pcbChild.firstChild().toElement();
                WidgetPCB_t miWidget;
                miWidget.id = pcbChild.attribute("id");
                while(!pcbChild_Element.isNull()){
                    QString tag = pcbChild_Element.tagName();
                    if(tag == "Nombre")
                        miWidget.nombre = pcbChild_Element.text();
                    if(tag == "PosX")
                        miWidget.posX = pcbChild_Element.text().toInt();
                    if(tag == "PosY")
                        miWidget.posY = pcbChild_Element.text().toInt();
                    if(tag == "InitState")
                        miWidget.data = pcbChild_Element.text().toInt();
                    if(tag == "Descripcion")
                        miWidget.descripcion = pcbChild_Element.text();
                    if(tag == "Alto")
                        miWidget.alto = pcbChild_Element.text().toInt();
                    if(tag == "Ancho")
                        miWidget.ancho = pcbChild_Element.text().toInt();
                    pcbChild_Element = pcbChild_Element.nextSibling().toElement();
                }

                if(pcbTag == "Led")
                    m_ListLeds.append(miWidget);
                if(pcbTag == "Display")
                    m_ListDisplays.append(miWidget);
                if(pcbTag == "Relay")
                    m_ListRelays.append(miWidget);
                if(pcbTag == "Pulsador")
                    m_ListPulsadores.append(miWidget);
                if(pcbTag == "Llave")
                    m_ListLlaves.append(miWidget);

                pcbChild = pcbChild.nextSibling().toElement();
            }
        }else{
            QDomElement umhChild = firstChild.firstChild().toElement();
            while(!umhChild.isNull()){
                QDomElement umhChild_Element = umhChild.firstChild().toElement();
                UMH_t miUMH;
                while(!umhChild_Element.isNull()){
                    QString tag = umhChild_Element.tagName();
                    if(tag == "accion" || tag == "evento"){
                        miUMH.umf.tipo = tag;
                        miUMH.umf.id = umhChild_Element.attribute("id");
                        miUMH.umf.nombre = umhChild_Element.text();
                    }else{
                        miUMH.w.nombre = tag;
                        miUMH.w.id = umhChild_Element.attribute("id");
                    }
                    umhChild_Element = umhChild_Element.nextSibling().toElement();
                }
                m_umh.append(miUMH);
                umhChild = umhChild.nextSibling().toElement();
            }
        }
        firstChild = firstChild.nextSibling().toElement();
    }
}

void UMHhandler::SetUMH(UMH_t u, QDomElement root){
    QDomElement parent, widget;
    //Seteo como parent a la accion/evento junto a su id
    parent = m_doc.createElement(u.umf.nombre);
    parent.setAttribute("id",u.umf.id);
    //seteo el widget que le corresponde junto a su id
    widget = m_doc.createElement(u.w.nombre);
    widget.setAttribute("id",u.w.id);
    //añado el widget al parent y el parent a la raiz
    parent.appendChild(widget);
    root.appendChild(parent);

}

void UMHhandler::SetWidget(widgets_t type, WidgetPCB_t w, QDomElement root){

    QDomElement parent,initState,posX,posY,nombre,descripcion,ancho,alto;

    switch(type){
    case leds:
        parent = m_doc.createElement("Led");
        break;
    case displays:
        parent = m_doc.createElement("Display");
        break;
    case pulsador:
        parent = m_doc.createElement("Pulsador");
        break;
    case llaves:
        parent = m_doc.createElement("Llave");
        break;
    case relays:
        parent = m_doc.createElement("Relay");
        break;
    default:
        break;
    }

    parent.setAttribute("id",w.id);

    initState = m_doc.createElement("InitState");
    initState.appendChild(m_doc.createTextNode(QString::number(w.data)));
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

void UMHhandler::AddWidget(widgets_t type, WidgetPCB_t w){
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

void UMHhandler::RemovePCB(){
    //vacio cada item widget del vector umh
    for(int i = 0; i<m_umh.length(); i++){
        m_umh[i].w.id = m_umh[i].w.nombre = m_umh[i].w.descripcion = "";
        m_umh[i].w.alto = m_umh[i].w.ancho =
            m_umh[i].w.posX = m_umh[i].w.posY =
            m_umh[i].w.data = 0;
    }
    m_ListLeds.clear();
    m_ListDisplays.clear();
    m_ListLlaves.clear();
    m_ListPulsadores.clear();
    m_ListRelays.clear();
}

