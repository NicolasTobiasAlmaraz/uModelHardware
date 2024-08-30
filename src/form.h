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

private:
    Ui::Form *ui;
    QListWidget *listWidget;
    QListWidget *listWidget2;
    QListWidget *listWidget3;
};

#endif // FORM_H
