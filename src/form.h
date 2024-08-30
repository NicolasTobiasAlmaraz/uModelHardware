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

private:
    Ui::Form *ui;
    QListWidget *listWidget;
};

#endif // FORM_H
