#ifndef XMLPARSER_H
#define XMLPARSER_H

#include <QFile>
#include <QString>
#include <QVector>
#include <hardwarescene.h>

// Library needed for processing XML documents
#include <QtXml>
// Library needed for processing files
#include <QFile>

class XMLParser {
public:
    XMLParser(const QString& filePath);

    inline QVector<WidgetPCB_t> getListLeds() {return m_ListLeds;}
    inline QVector<WidgetPCB_t> getListRelays() {return m_ListRelays;}
    inline QVector<WidgetPCB_t> getListPulsadores() {return m_ListPulsadores;}
    inline QVector<WidgetPCB_t> getListLlaves() {return m_ListLlaves;}
    inline QVector<WidgetPCB_t> getListDisplays() {return m_ListDisplays;}

private:
    QVector<int> m_ids;
    QVector<WidgetPCB_t> m_ListLeds;
    QVector<WidgetPCB_t> m_ListRelays;
    QVector<WidgetPCB_t> m_ListPulsadores;
    QVector<WidgetPCB_t> m_ListLlaves;
    QVector<WidgetPCB_t> m_ListDisplays;

    void parsear(const QString& filePath);
};

#endif // XMLPARSER_H
