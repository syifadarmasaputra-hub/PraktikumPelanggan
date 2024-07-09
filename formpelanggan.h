#ifndef FORMPELANGGAN_H
#define FORMPELANGGAN_H

#include <QWidget>
#include <pelanggan.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

namespace Ui {
class Formpelanggan;
}

class Ui::Formpelanggan : public QWidget
{
    Q_OBJECT

public:
    explicit Formpelanggan(QWidget *parent = nullptr);
    void loadTablepelanggan();
    ~Formpelanggan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_tablePelanggan_activated(const QModelIndex &index);

private:
    Ui::Formpelanggan *ui;
    pelanggan uji;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
    QSqlQueryModel *tabelModel;
};

#endif // FORMPELANGGAN_H
