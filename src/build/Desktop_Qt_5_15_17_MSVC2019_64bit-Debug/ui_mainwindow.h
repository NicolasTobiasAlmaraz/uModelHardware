/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNuevoProyectoUMH;
    QAction *actionNuevoPCB;
    QAction *actionGuardarProyectoUMH;
    QAction *actionGuardarPCB;
    QAction *actionLimpiarPCB;
    QAction *actionLimpiarUMF;
    QAction *actionCargar;
    QAction *actionAbrirProyectoUMH;
    QAction *actionAbrirPCB;
    QAction *actionAbrirUMF;
    QAction *actionInstrucciones;
    QAction *actionRooteo;
    QAction *actionConfiguraci_n;
    QAction *actionSimulaci_n;
    QAction *actionIniciarSimulacionToolbar;
    QAction *actionConfigurarServidorToolbar;
    QAction *actionGuardarUMHToolbar;
    QAction *actionDebug;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab_root;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_rooteo;
    QLineEdit *lineEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QWidget *tab_config;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_eventos;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QLabel *label_16;
    QScrollArea *scrollEventos;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *layoutWidget3;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QLabel *label_acciones;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QLabel *label_18;
    QScrollArea *scrollAcciones;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *layoutWidget4;
    QFormLayout *formLayout_3;
    QLabel *label_10;
    QComboBox *comboBox_6;
    QLabel *label_11;
    QComboBox *comboBox_7;
    QPushButton *pushButton_11;
    QPushButton *pushButton_6;
    QMdiArea *mdiArea;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuNuevo;
    QMenu *menuGuardar;
    QMenu *menuLimpiar;
    QMenu *menuAbrir;
    QMenu *menuAyuda;
    QMenu *menuPerspectiva;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1038, 811);
        MainWindow->setMinimumSize(QSize(800, 400));
        MainWindow->setAutoFillBackground(true);
        actionNuevoProyectoUMH = new QAction(MainWindow);
        actionNuevoProyectoUMH->setObjectName(QString::fromUtf8("actionNuevoProyectoUMH"));
        actionNuevoProyectoUMH->setEnabled(false);
        actionNuevoPCB = new QAction(MainWindow);
        actionNuevoPCB->setObjectName(QString::fromUtf8("actionNuevoPCB"));
        actionGuardarProyectoUMH = new QAction(MainWindow);
        actionGuardarProyectoUMH->setObjectName(QString::fromUtf8("actionGuardarProyectoUMH"));
        actionGuardarPCB = new QAction(MainWindow);
        actionGuardarPCB->setObjectName(QString::fromUtf8("actionGuardarPCB"));
        actionLimpiarPCB = new QAction(MainWindow);
        actionLimpiarPCB->setObjectName(QString::fromUtf8("actionLimpiarPCB"));
        actionLimpiarUMF = new QAction(MainWindow);
        actionLimpiarUMF->setObjectName(QString::fromUtf8("actionLimpiarUMF"));
        actionCargar = new QAction(MainWindow);
        actionCargar->setObjectName(QString::fromUtf8("actionCargar"));
        actionAbrirProyectoUMH = new QAction(MainWindow);
        actionAbrirProyectoUMH->setObjectName(QString::fromUtf8("actionAbrirProyectoUMH"));
        actionAbrirProyectoUMH->setEnabled(false);
        actionAbrirPCB = new QAction(MainWindow);
        actionAbrirPCB->setObjectName(QString::fromUtf8("actionAbrirPCB"));
        actionAbrirUMF = new QAction(MainWindow);
        actionAbrirUMF->setObjectName(QString::fromUtf8("actionAbrirUMF"));
        actionAbrirUMF->setEnabled(false);
        actionInstrucciones = new QAction(MainWindow);
        actionInstrucciones->setObjectName(QString::fromUtf8("actionInstrucciones"));
        actionRooteo = new QAction(MainWindow);
        actionRooteo->setObjectName(QString::fromUtf8("actionRooteo"));
        actionConfiguraci_n = new QAction(MainWindow);
        actionConfiguraci_n->setObjectName(QString::fromUtf8("actionConfiguraci_n"));
        actionSimulaci_n = new QAction(MainWindow);
        actionSimulaci_n->setObjectName(QString::fromUtf8("actionSimulaci_n"));
        actionIniciarSimulacionToolbar = new QAction(MainWindow);
        actionIniciarSimulacionToolbar->setObjectName(QString::fromUtf8("actionIniciarSimulacionToolbar"));
        actionIniciarSimulacionToolbar->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIniciarSimulacionToolbar->setIcon(icon);
        actionIniciarSimulacionToolbar->setMenuRole(QAction::NoRole);
        actionConfigurarServidorToolbar = new QAction(MainWindow);
        actionConfigurarServidorToolbar->setObjectName(QString::fromUtf8("actionConfigurarServidorToolbar"));
        actionConfigurarServidorToolbar->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigurarServidorToolbar->setIcon(icon1);
        actionConfigurarServidorToolbar->setMenuRole(QAction::NoRole);
        actionGuardarUMHToolbar = new QAction(MainWindow);
        actionGuardarUMHToolbar->setObjectName(QString::fromUtf8("actionGuardarUMHToolbar"));
        actionGuardarUMHToolbar->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/diskette.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardarUMHToolbar->setIcon(icon2);
        actionGuardarUMHToolbar->setMenuRole(QAction::NoRole);
        actionDebug = new QAction(MainWindow);
        actionDebug->setObjectName(QString::fromUtf8("actionDebug"));
        actionDebug->setEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(300, 0));
        tabWidget->setMaximumSize(QSize(500, 16777215));
        tab_root = new QWidget();
        tab_root->setObjectName(QString::fromUtf8("tab_root"));
        layoutWidget = new QWidget(tab_root);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 20, 271, 681));
        verticalLayout_rooteo = new QVBoxLayout(layoutWidget);
        verticalLayout_rooteo->setObjectName(QString::fromUtf8("verticalLayout_rooteo"));
        verticalLayout_rooteo->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_rooteo->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_rooteo->addWidget(lineEdit);

        scrollArea = new QScrollArea(layoutWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 267, 585));
        layoutWidget1 = new QWidget(scrollAreaWidgetContents);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 251, 621));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_2);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_rooteo->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        horizontalLayout_2->addWidget(pushButton_10);


        verticalLayout_rooteo->addLayout(horizontalLayout_2);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_rooteo->addWidget(pushButton_8);

        tabWidget->addTab(tab_root, QString());
        tab_config = new QWidget();
        tab_config->setObjectName(QString::fromUtf8("tab_config"));
        layoutWidget2 = new QWidget(tab_config);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 271, 671));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_eventos = new QLabel(layoutWidget2);
        label_eventos->setObjectName(QString::fromUtf8("label_eventos"));

        verticalLayout_3->addWidget(label_eventos);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_5->addWidget(label_15);

        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_5->addWidget(label_16);


        verticalLayout_3->addLayout(horizontalLayout_5);

        scrollEventos = new QScrollArea(layoutWidget2);
        scrollEventos->setObjectName(QString::fromUtf8("scrollEventos"));
        scrollEventos->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 267, 254));
        layoutWidget3 = new QWidget(scrollAreaWidgetContents_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 13, 251, 251));
        formLayout_2 = new QFormLayout(layoutWidget3);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        comboBox = new QComboBox(layoutWidget3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        comboBox_2 = new QComboBox(layoutWidget3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        comboBox_3 = new QComboBox(layoutWidget3);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, comboBox_3);

        comboBox_4 = new QComboBox(layoutWidget3);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBox_4);

        comboBox_5 = new QComboBox(layoutWidget3);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, comboBox_5);

        scrollEventos->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollEventos);

        label_acciones = new QLabel(layoutWidget2);
        label_acciones->setObjectName(QString::fromUtf8("label_acciones"));

        verticalLayout_3->addWidget(label_acciones);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_6->addWidget(label_17);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_6->addWidget(label_18);


        verticalLayout_3->addLayout(horizontalLayout_6);

        scrollAcciones = new QScrollArea(layoutWidget2);
        scrollAcciones->setObjectName(QString::fromUtf8("scrollAcciones"));
        scrollAcciones->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 267, 253));
        layoutWidget4 = new QWidget(scrollAreaWidgetContents_3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 10, 251, 271));
        formLayout_3 = new QFormLayout(layoutWidget4);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_10);

        comboBox_6 = new QComboBox(layoutWidget4);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, comboBox_6);

        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_11);

        comboBox_7 = new QComboBox(layoutWidget4);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, comboBox_7);

        scrollAcciones->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollAcciones);

        pushButton_11 = new QPushButton(layoutWidget2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        verticalLayout_3->addWidget(pushButton_11);

        pushButton_6 = new QPushButton(layoutWidget2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_3->addWidget(pushButton_6);

        tabWidget->addTab(tab_config, QString());

        horizontalLayout->addWidget(tabWidget);

        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setEnabled(false);
        mdiArea->setMinimumSize(QSize(500, 0));

        horizontalLayout->addWidget(mdiArea);

        horizontalSpacer = new QSpacerItem(40, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1038, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuNuevo = new QMenu(menuArchivo);
        menuNuevo->setObjectName(QString::fromUtf8("menuNuevo"));
        menuGuardar = new QMenu(menuArchivo);
        menuGuardar->setObjectName(QString::fromUtf8("menuGuardar"));
        menuGuardar->setEnabled(false);
        menuLimpiar = new QMenu(menuArchivo);
        menuLimpiar->setObjectName(QString::fromUtf8("menuLimpiar"));
        menuLimpiar->setEnabled(false);
        menuAbrir = new QMenu(menuArchivo);
        menuAbrir->setObjectName(QString::fromUtf8("menuAbrir"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        menuPerspectiva = new QMenu(menubar);
        menuPerspectiva->setObjectName(QString::fromUtf8("menuPerspectiva"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuPerspectiva->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(menuNuevo->menuAction());
        menuArchivo->addAction(menuAbrir->menuAction());
        menuArchivo->addAction(menuGuardar->menuAction());
        menuArchivo->addSeparator();
        menuArchivo->addAction(menuLimpiar->menuAction());
        menuNuevo->addAction(actionNuevoProyectoUMH);
        menuNuevo->addAction(actionNuevoPCB);
        menuGuardar->addAction(actionGuardarProyectoUMH);
        menuGuardar->addAction(actionGuardarPCB);
        menuLimpiar->addAction(actionLimpiarPCB);
        menuLimpiar->addAction(actionLimpiarUMF);
        menuAbrir->addAction(actionAbrirPCB);
        menuAbrir->addAction(actionAbrirUMF);
        menuAbrir->addAction(actionAbrirProyectoUMH);
        menuAyuda->addAction(actionInstrucciones);
        menuAyuda->addAction(actionDebug);
        menuPerspectiva->addAction(actionRooteo);
        menuPerspectiva->addAction(actionConfiguraci_n);
        menuPerspectiva->addAction(actionSimulaci_n);
        toolBar->addAction(actionConfigurarServidorToolbar);
        toolBar->addAction(actionIniciarSimulacionToolbar);
        toolBar->addAction(actionGuardarUMHToolbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNuevoProyectoUMH->setText(QCoreApplication::translate("MainWindow", "Proyecto UMH", nullptr));
        actionNuevoPCB->setText(QCoreApplication::translate("MainWindow", "PCB", nullptr));
        actionGuardarProyectoUMH->setText(QCoreApplication::translate("MainWindow", "Proyecto UMH", nullptr));
        actionGuardarPCB->setText(QCoreApplication::translate("MainWindow", "PCB", nullptr));
        actionLimpiarPCB->setText(QCoreApplication::translate("MainWindow", "PCB", nullptr));
        actionLimpiarUMF->setText(QCoreApplication::translate("MainWindow", "UMF", nullptr));
        actionCargar->setText(QCoreApplication::translate("MainWindow", "Abrir Proyecto UMH", nullptr));
        actionAbrirProyectoUMH->setText(QCoreApplication::translate("MainWindow", "Proyecto UMH", nullptr));
        actionAbrirPCB->setText(QCoreApplication::translate("MainWindow", "PCB", nullptr));
        actionAbrirUMF->setText(QCoreApplication::translate("MainWindow", "UMF", nullptr));
        actionInstrucciones->setText(QCoreApplication::translate("MainWindow", "Instrucciones", nullptr));
        actionRooteo->setText(QCoreApplication::translate("MainWindow", "Rooteo", nullptr));
        actionConfiguraci_n->setText(QCoreApplication::translate("MainWindow", "Configuraci\303\263n", nullptr));
        actionSimulaci_n->setText(QCoreApplication::translate("MainWindow", "Simulaci\303\263n", nullptr));
        actionIniciarSimulacionToolbar->setText(QCoreApplication::translate("MainWindow", "Iniciar Simulacion", nullptr));
        actionConfigurarServidorToolbar->setText(QCoreApplication::translate("MainWindow", "Configurar Servidor", nullptr));
        actionGuardarUMHToolbar->setText(QCoreApplication::translate("MainWindow", "Guardar UMH", nullptr));
        actionDebug->setText(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "Buscar Widget ...", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "todo Foto", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "insertar Led", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "insertar Relay", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "todo Foto", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "todo Foto", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "todo Foto", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "insertar Display", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "insertar pulsador", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Cargar PCB Existente", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Exportar PCB", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Iniciar Rooteo / Guardar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_root), QCoreApplication::translate("MainWindow", "Rooteo", nullptr));
        label_eventos->setText(QCoreApplication::translate("MainWindow", "Eventos", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Evento en .umf", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Widget Asociado", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Evento_1", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Evento_2", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Evento_5", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Evento_4", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Evento_3", nullptr));
        label_acciones->setText(QCoreApplication::translate("MainWindow", "Acciones", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Acci\303\263n en .umf", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Widget Asociado", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Accion_1", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Accion_2", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Guardar Proyecto", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Cargar .umf", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_config), QCoreApplication::translate("MainWindow", "Configuraci\303\263n", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menuNuevo->setTitle(QCoreApplication::translate("MainWindow", "Nuevo", nullptr));
        menuGuardar->setTitle(QCoreApplication::translate("MainWindow", "Guardar Como", nullptr));
        menuLimpiar->setTitle(QCoreApplication::translate("MainWindow", "Limpiar", nullptr));
        menuAbrir->setTitle(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        menuAyuda->setTitle(QCoreApplication::translate("MainWindow", "Ayuda", nullptr));
        menuPerspectiva->setTitle(QCoreApplication::translate("MainWindow", "Perspectiva", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
