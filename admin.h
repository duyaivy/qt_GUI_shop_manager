#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>

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
private:
    Ui::admin *ui;
    void setGroupBtn();
    void setGroupBtnPage();
    void connectLabel();
};

#endif // ADMIN_H
