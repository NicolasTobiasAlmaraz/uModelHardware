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

private slots:

    void on_actionAbrirUMF_triggered();

    void on_actionAbrirPCB_triggered();

    void on_actionAbrirProyectoUMH_triggered();

    void on_actionDebug_triggered();

    //Solo para debug
    void addItemsListWidget();
    void addItemsListWidget2();

private:
    Ui::MainWindow *ui;
    Form *m_form;
    PCBhandler *m_pcb = nullptr;
    UMFhandler *m_umf = nullptr;
    UMHhandler *m_umh = nullptr;
};
#endif // MAINWINDOW_H
