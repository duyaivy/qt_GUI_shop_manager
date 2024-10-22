/********************************************************************************
** Form generated from reading UI file 'adhome.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADHOME_H
#define UI_ADHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_adHome
{
public:

    void setupUi(QDialog *adHome)
    {
        if (adHome->objectName().isEmpty())
            adHome->setObjectName("adHome");
        adHome->resize(1177, 781);

        retranslateUi(adHome);

        QMetaObject::connectSlotsByName(adHome);
    } // setupUi

    void retranslateUi(QDialog *adHome)
    {
        adHome->setWindowTitle(QCoreApplication::translate("adHome", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adHome: public Ui_adHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADHOME_H
