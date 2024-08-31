#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QListWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

    QListWidget *getListWidget();
    QListWidget *getListWidget2();
    QListWidget *getListWidget3();

signals:
    void buttonClicked();

private:
    Ui::Form *ui;
    QListWidget *listWidget;
    QListWidget *listWidget2;
    QListWidget *listWidget3;

    int m_leds = 0;

};

#endif // FORM_H
