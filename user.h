#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include<QTableView>
#include "global.h"
#include "mainwindow.h"
namespace Ui {
class user;
}

class user : public QMainWindow
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

private slots:
    void on_refeshInv_2_clicked();

    void on_refeshInv_clicked();



    void on_comboBox_currentIndexChanged(int index);

    void on_saveBtn_clicked();

    void on_pushButton_3_clicked();

    void on_logOutBtn_clicked();

    void on_notifyBtn_2_clicked();

private:
    Ui::user *ui;
    void setGroupBtn();
    void addProducts(QWidget *parentWidget) ;
    void populateCartWidget(QWidget* cartWidget);
    void setupPreBuyWidget(QWidget *preBuyW);
    void setupInvoiceCus();
    void onTableInvoiceClicked(const QModelIndex &index, QTableView *tableView);
    void setupProfileCus();
};

#endif // USER_H
