#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include<qtableview.h>
namespace Ui {
class admin;
}

class admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_logOutBtn_clicked();
    void on_findStaffBtn_clicked();

    void on_pushButton_9_clicked();

    void on_addStaffBtn_clicked();

    void on_refeshCusPage_clicked();

    void on_findCusBtn_clicked();

    void on_refeshInv_clicked();

    void on_findInvBtn_clicked();

    void on_refeshCusPage_2_clicked();



    void on_findCusBtn_2_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_addCusBtn_2_clicked();

    void on_saveBtn_clicked();

    void on_comboBox_2_currentIndexChanged(int index);

    void on_refeshInv_3_clicked();

private:
    Ui::admin *ui;
    void setGroupBtn();
    void setGroupBtnPage();
    void connectLabel();
    void setUpInvoiceViewHome();
    void setupTableView(QTableView *tableView);
    void setupStaffPage();
    void onTableRowClicked(const QModelIndex &index, QTableView *tableView);
    void onTableInvoiceClicked(const QModelIndex &index, QTableView *tableView);
    void onTableProductClicked(const QModelIndex &index, QTableView *tableView);
    bool isConnected = false;
    void setupProfilePage();
    void setupCusPage();
    void setupInvoicePage();
    void setupProductPage();
    void setupProfileInvoice();
};

#endif // ADMIN_H
