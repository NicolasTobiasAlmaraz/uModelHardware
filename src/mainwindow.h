#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <xmlhandler/pcbhandler.h>
#include <xmlhandler/umfhandler.h>
#include <xmlhandler/umhhandler.h>
#include "form.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void EnableUi();

        //Solo para debug
    void addItemsListWidget();
    void addItemsListWidget2();
    void addItemsListWidget3();

private slots:

    void on_actionAbrirUMF_triggered();

    void on_actionAbrirPCB_triggered();

    void on_actionAbrirProyectoUMH_triggered();

    void on_actionDebug_triggered();

    void handleButtonClick();


    void on_actionGuardarPCB_triggered();

    void on_actionNuevoPCB_triggered();

    void on_actionGuardar_triggered();

    void on_actionNuevoProyectoUMH_triggered();

private:
    Ui::MainWindow *ui;
    Form *m_form;
    PCBhandler *m_pcb = nullptr;
    UMFhandler *m_umf = nullptr;
    UMHhandler *m_umh = nullptr;
};
#endif // MAINWINDOW_H
