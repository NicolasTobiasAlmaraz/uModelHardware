#ifndef ASSISTANTFORM_H
#define ASSISTANTFORM_H

#include <QWidget>
#include <QListWidget>
#include <QFileDialog>

namespace Ui {
class AssistantForm;
}

class AssistantForm : public QWidget
{
    Q_OBJECT

public:
    explicit AssistantForm(QWidget *parent = nullptr);
    ~AssistantForm();

    enum state_t {start,dir,confirm};

    QString GetUMHPath() const {return m_umhPath;}

signals:
    void confirmSignal();

private slots:
    void on_siguiente_clicked();

    void on_pushButton_clicked();

    void on_searchPath_clicked();

private:
    Ui::AssistantForm *ui;
    QString m_umhPath;

    state_t m_state = start;

};

#endif // ASSISTANTFORM_H
