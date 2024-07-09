/********************************************************************************
** Form generated from reading UI file 'formutama.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMUTAMA_H
#define UI_FORMUTAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormUtama
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FormUtama)
    {
        if (FormUtama->objectName().isEmpty())
            FormUtama->setObjectName("FormUtama");
        FormUtama->resize(800, 600);
        centralwidget = new QWidget(FormUtama);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 49, 16));
        FormUtama->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FormUtama);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        FormUtama->setMenuBar(menubar);
        statusbar = new QStatusBar(FormUtama);
        statusbar->setObjectName("statusbar");
        FormUtama->setStatusBar(statusbar);

        retranslateUi(FormUtama);

        QMetaObject::connectSlotsByName(FormUtama);
    } // setupUi

    void retranslateUi(QMainWindow *FormUtama)
    {
        FormUtama->setWindowTitle(QCoreApplication::translate("FormUtama", "FormUtama", nullptr));
        label->setText(QCoreApplication::translate("FormUtama", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormUtama: public Ui_FormUtama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMUTAMA_H
