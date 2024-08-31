#include "umhhandler.h"

UMHhandler::~UMHhandler() {}

void UMHhandler::Write(){
    //Creo raiz y la añado
    QDomElement root = m_doc.createElement("UMH");
    m_doc.appendChild(root);
    //itero cada item accion-widget y lo seteo
    for(int i = 0; i<m_umh.length();i++){
        SetUMH(m_umh[i],root);
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

void UMHhandler::Read(){
    QFile f(filePath);
    if (!f.open(QIODevice::ReadOnly )){
        QMessageBox messageBox;
        messageBox.critical(0,"Error","No se pudo abrir el archivo");
        return;
    }

    m_doc.clear();
    if (!m_doc.setContent(&f)) {  // Check if setContent is successful
        f.close();
        QMessageBox messageBox;
        messageBox.critical(0, "Error", "El contenido XML no es válido");
        delete this;
        return;
    }
    f.close();

    QDomElement root = m_doc.documentElement();
    if(root.isNull())
        return;
    QDomElement umh = root.firstChild().toElement();

    while(!umh.isNull()){
        if(umh.tagName()!="accion"&&umh.tagName()=="evento"){
            umh = umh.nextSibling().toElement();
            continue;
        }
        QDomElement child = umh.firstChild().toElement();
        UMH_t aux;
        while(!child.isNull()){
            if(child.tagName()!="widget"){
                aux.umf.nombre = child.tagName();
                aux.umf.id = child.attribute("id");
                aux.umf.tipo = umh.tagName();
            }
            else if(child.tagName()=="widget"){
                QDomElement widget = child.firstChild().toElement();
                aux.w.nombre = widget.tagName();
                aux.w.id = widget.attribute("id");
            }
            child = child.nextSibling().toElement();
        }
        umh = umh.nextSibling().toElement();
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
