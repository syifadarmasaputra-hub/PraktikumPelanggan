/********************************************************************************
** Form generated from reading UI file 'formkaryawan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKARYAWAN_H
#define UI_FORMKARYAWAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formkaryawan
{
public:
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *golonganLabel;
    QComboBox *golonganComboBox;
    QLabel *statusNikahLabel;
    QComboBox *statusNikahComboBox;
    QLabel *jumlahAnakLabel;
    QLineEdit *jumlahAnakLineEdit;
    QLabel *masaKerjaLabel;
    QLineEdit *masaKerjaLineEdit;
    QLabel *gajiTotalLabel;
    QLineEdit *gajiTotalLineEdit;
    QGroupBox *formGroupBox_2;
    QFormLayout *formLayout_2;
    QLabel *nIKLabel;
    QLineEdit *nIKLineEdit;
    QLabel *namaLabel;
    QLineEdit *namaLineEdit;
    QLabel *telpLabel;
    QLineEdit *telpLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableView *tableKaryawan;

    void setupUi(QWidget *Formkaryawan)
    {
        if (Formkaryawan->objectName().isEmpty())
            Formkaryawan->setObjectName("Formkaryawan");
        Formkaryawan->resize(777, 504);
        pushButton = new QPushButton(Formkaryawan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 160, 61, 41));
        formLayoutWidget = new QWidget(Formkaryawan);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(380, 40, 321, 166));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        golonganLabel = new QLabel(formLayoutWidget);
        golonganLabel->setObjectName("golonganLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, golonganLabel);

        golonganComboBox = new QComboBox(formLayoutWidget);
        golonganComboBox->addItem(QString());
        golonganComboBox->addItem(QString());
        golonganComboBox->addItem(QString());
        golonganComboBox->addItem(QString());
        golonganComboBox->setObjectName("golonganComboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, golonganComboBox);

        statusNikahLabel = new QLabel(formLayoutWidget);
        statusNikahLabel->setObjectName("statusNikahLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, statusNikahLabel);

        statusNikahComboBox = new QComboBox(formLayoutWidget);
        statusNikahComboBox->addItem(QString());
        statusNikahComboBox->addItem(QString());
        statusNikahComboBox->setObjectName("statusNikahComboBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, statusNikahComboBox);

        jumlahAnakLabel = new QLabel(formLayoutWidget);
        jumlahAnakLabel->setObjectName("jumlahAnakLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, jumlahAnakLabel);

        jumlahAnakLineEdit = new QLineEdit(formLayoutWidget);
        jumlahAnakLineEdit->setObjectName("jumlahAnakLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, jumlahAnakLineEdit);

        masaKerjaLabel = new QLabel(formLayoutWidget);
        masaKerjaLabel->setObjectName("masaKerjaLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, masaKerjaLabel);

        masaKerjaLineEdit = new QLineEdit(formLayoutWidget);
        masaKerjaLineEdit->setObjectName("masaKerjaLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, masaKerjaLineEdit);

        gajiTotalLabel = new QLabel(formLayoutWidget);
        gajiTotalLabel->setObjectName("gajiTotalLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, gajiTotalLabel);

        gajiTotalLineEdit = new QLineEdit(formLayoutWidget);
        gajiTotalLineEdit->setObjectName("gajiTotalLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, gajiTotalLineEdit);

        formGroupBox_2 = new QGroupBox(Formkaryawan);
        formGroupBox_2->setObjectName("formGroupBox_2");
        formGroupBox_2->setGeometry(QRect(40, 40, 321, 121));
        formLayout_2 = new QFormLayout(formGroupBox_2);
        formLayout_2->setObjectName("formLayout_2");
        nIKLabel = new QLabel(formGroupBox_2);
        nIKLabel->setObjectName("nIKLabel");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nIKLabel);

        nIKLineEdit = new QLineEdit(formGroupBox_2);
        nIKLineEdit->setObjectName("nIKLineEdit");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nIKLineEdit);

        namaLabel = new QLabel(formGroupBox_2);
        namaLabel->setObjectName("namaLabel");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, namaLabel);

        namaLineEdit = new QLineEdit(formGroupBox_2);
        namaLineEdit->setObjectName("namaLineEdit");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, namaLineEdit);

        telpLabel = new QLabel(formGroupBox_2);
        telpLabel->setObjectName("telpLabel");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, telpLabel);

        telpLineEdit = new QLineEdit(formGroupBox_2);
        telpLineEdit->setObjectName("telpLineEdit");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, telpLineEdit);

        alamatLabel = new QLabel(formGroupBox_2);
        alamatLabel->setObjectName("alamatLabel");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formGroupBox_2);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, alamatLineEdit);

        pushButton_2 = new QPushButton(Formkaryawan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 160, 61, 41));
        pushButton_3 = new QPushButton(Formkaryawan);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(230, 160, 61, 41));
        pushButton_4 = new QPushButton(Formkaryawan);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(300, 160, 61, 41));
        tableKaryawan = new QTableView(Formkaryawan);
        tableKaryawan->setObjectName("tableKaryawan");
        tableKaryawan->setGeometry(QRect(90, 220, 611, 201));

        retranslateUi(Formkaryawan);

        QMetaObject::connectSlotsByName(Formkaryawan);
    } // setupUi

    void retranslateUi(QWidget *Formkaryawan)
    {
        Formkaryawan->setWindowTitle(QCoreApplication::translate("Formkaryawan", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Formkaryawan", "Simpan", nullptr));
        golonganLabel->setText(QCoreApplication::translate("Formkaryawan", "Golongan", nullptr));
        golonganComboBox->setItemText(0, QCoreApplication::translate("Formkaryawan", "I", nullptr));
        golonganComboBox->setItemText(1, QCoreApplication::translate("Formkaryawan", "II", nullptr));
        golonganComboBox->setItemText(2, QCoreApplication::translate("Formkaryawan", "III", nullptr));
        golonganComboBox->setItemText(3, QCoreApplication::translate("Formkaryawan", "IV", nullptr));

        statusNikahLabel->setText(QCoreApplication::translate("Formkaryawan", "Status Nikah", nullptr));
        statusNikahComboBox->setItemText(0, QCoreApplication::translate("Formkaryawan", "Menikah", nullptr));
        statusNikahComboBox->setItemText(1, QCoreApplication::translate("Formkaryawan", "Belum Menikah", nullptr));

        jumlahAnakLabel->setText(QCoreApplication::translate("Formkaryawan", "Jumlah Anak", nullptr));
        masaKerjaLabel->setText(QCoreApplication::translate("Formkaryawan", "Masa Kerja", nullptr));
        gajiTotalLabel->setText(QCoreApplication::translate("Formkaryawan", "Gaji Total", nullptr));
        nIKLabel->setText(QCoreApplication::translate("Formkaryawan", "NIK", nullptr));
        namaLabel->setText(QCoreApplication::translate("Formkaryawan", "Nama", nullptr));
        telpLabel->setText(QCoreApplication::translate("Formkaryawan", "Telp", nullptr));
        alamatLabel->setText(QCoreApplication::translate("Formkaryawan", "Alamat", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Formkaryawan", "ubah", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Formkaryawan", "Hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Formkaryawan", "cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formkaryawan: public Ui_Formkaryawan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKARYAWAN_H
