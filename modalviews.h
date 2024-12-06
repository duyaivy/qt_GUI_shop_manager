#ifndef MODALVIEWS_H
#define MODALVIEWS_H

#include <QMainWindow>
#include "global.h"
namespace Ui {
class modalViews;
}

class modalViews : public QMainWindow
{
    Q_OBJECT

public:

    explicit modalViews(QWidget *parent = nullptr);
    ~modalViews();
    void setupInvoiceView(string &inv);
     void setupPrdAdminPage(Product*p);
    void setupPrdUserPage(Product *p);
     void setupPaymentPage(string inv);
    void setStackWidget(int i);
 private slots:
     void on_cancelBtn_2_clicked();

     void on_updateBtn_clicked();

     void on_cancelBtn_3_clicked();

     void on_deleteBtn_clicked();

     void on_pushButton_3_clicked();

     void on_updateBtn_2_clicked();

     void on_updateBtn_5_clicked();

     void on_choseBtn_clicked();

     void on_addBtn_clicked();

     void on_cancelBtn_7_clicked();

     void on_cancelBtn_6_clicked();

     void on_cartBtn_clicked();

     void on_buyBtn_clicked();

     void on_cancelBtn_10_clicked();

     void on_cancelBtn_9_clicked();

     void on_addBtn_3_clicked();

     void on_addBtn_2_clicked();

 private:
    Ui::modalViews *ui;

};

#endif // MODALVIEWS_H
