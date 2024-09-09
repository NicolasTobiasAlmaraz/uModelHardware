#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <xmlhandler/pcbhandler.h>
#include <xmlhandler/umfhandler.h>
#include <xmlhandler/umhhandler.h>
#include "form.h"
#include "assistantform.h"


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

    void handleInput();

private slots:

    void on_actionAbrirUMF_triggered();

    void on_actionAbrirPCB_triggered();

    void on_actionAbrirProyectoUMH_triggered();

    void on_actionDebug_triggered();

    void handleButtonClick();


    void on_actionGuardarPCB_triggered();

    void on_actionNuevoPCB_triggered();

    void on_actionGuardar_triggered();

    void on_actionGuardarProyectoUMH_triggered();

    void on_actionIniciarSimulacionToolbar_triggered();

    void on_actionVincular_PCB_triggered();

    void on_actionDesvincular_PCB_triggered();

    void on_actionVincular_UMF_triggered();

    void on_actionDetener_Simulacion_triggered();

    void on_actionNuevo_triggered();

private:
    Ui::MainWindow *ui;
    Form *m_form = nullptr;
    AssistantForm *m_assistant;
    PCBhandler *m_pcb = nullptr;
    UMFhandler *m_umf = nullptr;
    UMHhandler *m_umh = nullptr;
    bool simulationPlaying = 0;
};
#endif // MAINWINDOW_H
