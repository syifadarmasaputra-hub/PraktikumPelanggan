/********************************************************************************
** Form generated from reading UI file 'guipraktikum.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIPRAKTIKUM_H
#define UI_GUIPRAKTIKUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guiPraktikum
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *guiPraktikum)
    {
        if (guiPraktikum->objectName().isEmpty())
            guiPraktikum->setObjectName("guiPraktikum");
        guiPraktikum->resize(607, 210);
        centralwidget = new QWidget(guiPraktikum);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 140, 131, 31));
        guiPraktikum->setCentralWidget(centralwidget);
        menubar = new QMenuBar(guiPraktikum);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 607, 22));
        guiPraktikum->setMenuBar(menubar);
        statusbar = new QStatusBar(guiPraktikum);
        statusbar->setObjectName("statusbar");
        guiPraktikum->setStatusBar(statusbar);

        retranslateUi(guiPraktikum);

        QMetaObject::connectSlotsByName(guiPraktikum);
    } // setupUi

    void retranslateUi(QMainWindow *guiPraktikum)
    {
        guiPraktikum->setWindowTitle(QCoreApplication::translate("guiPraktikum", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("guiPraktikum", "Form Karyawan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guiPraktikum: public Ui_guiPraktikum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIPRAKTIKUM_H
