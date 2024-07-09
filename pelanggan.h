#ifndef PELANGGAN_H
#define PELANGGAN_H
#include <pembayaran.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class pelanggan : public bayar
{
public:
    pelanggan(); // contuctor 1
    pelanggan(QString id, QString golongan,
             QString status, int jumlahAnak, int masalangganan,
             QString nama, QString alamat, QString telp); // contuctor 2 (Overload contuctor)

    void setID(QString ID);
    QString getID();

    void setNAMA(QString NAMA);
    QString getNAMA();

    void setALAMAT(QString ALAMAT);
    QString getALAMAT();

    void setTELP(QString TELP);
    QString getTElP();

private:
    QString id, nama, alamat, telp;
    QSqlDatabase koneksiDB;
};

#endif // PELANGGAN_H
