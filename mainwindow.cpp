#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "person.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void controlText(person p);

private slots:
    void on_pushButton_clicked();
    void on_closeBtn_clicked();
    void on_closeBtn_2_clicked();
    void on_signUpBtn_clicked();
    void on_returnLoginBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H





















