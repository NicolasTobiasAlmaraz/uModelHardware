#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <hardwarescene.h>
#include <xmlparser.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PB_ledOn_clicked();
    void on_PB_ledOff_clicked();
    void on_PB_relayOn_clicked();
    void on_PB_relayOff_clicked();
    void on_PB_pulsadorOn_clicked();
    void on_PB_pulsadorOff_clicked();
    void on_actionAbrir_triggered();
    void on_PB_llaveOn_clicked();
    void on_PB_llaveOff_clicked();
    void on_PB_display_clicked();

private:
    Ui::MainWindow *ui;
    HardwareScene *m_pcb;
    XMLParser *m_XMLParser;

    void parsearXml(QString path);
};
#endif // MAINWINDOW_H
