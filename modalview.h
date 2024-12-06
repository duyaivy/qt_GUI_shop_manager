#ifndef MODALVIEW_H
#define MODALVIEW_H

#include <QMainWindow>
#include"global.h"
namespace Ui {
class modalView;
}

class modalView : public QMainWindow
{
    Q_OBJECT

public:
    explicit modalView(QWidget *parent = nullptr);
    ~modalView();
    void setGroupBtn();
    void setStackWidget(int i);
    void setupInvoiceView(string &inv, cvector<string> &c );
    void setPerson( Person * p);
    void setupInforView(Person *p);
private slots:
    void on_cancelBtn_clicked();

    void on_saveBtn_clicked();

    void on_choseBtn_clicked();

    void on_addBtn_clicked();

    void on_cancelBtn_3_clicked();


    void on_saveBtn_2_clicked();

    void on_cancelBtn_2_clicked();

private:
    Ui::modalView *ui;

};

#endif // MODALVIEW_H
