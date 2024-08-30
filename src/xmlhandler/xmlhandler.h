#ifndef XMLHANDLER_H
#define XMLHANDLER_H

#include <QVector>
#include <QtXml>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QTime>
#include <QRandomGenerator>

struct WidgetPCB_t {
    QString id;
    int data;
    QString nombre;
    QString descripcion;
    int posX;
    int posY;
    int size; // alto y ancho
};

struct UMF_t {
    QString id;
    QString nombre;
    QString tipo;
};

class XMLhandler
{
public:
    XMLhandler(QString fp);

    virtual ~XMLhandler();

    virtual void Write();
    virtual void Read();

    QString filePath;

};

#endif // XMLHANDLER_H
