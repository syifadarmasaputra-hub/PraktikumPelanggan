#include "pelanggan.h"

pelanggan::pelanggan() {
    // koneksiDB = QSqlDatabase::addDatabase("QODBC");
    // koneksiDB.setDatabaseName("dsn_penggajian");
    // koneksiDB.setUserName("root");
    // koneksiDB.setPassword("");

    // if (koneksiDB.open()){
    //     qDebug()<<"Database Terkoneksi";
    // }else{
    //     qDebug()<<koneksiDB.lastError().text();
    // }
}

pelanggan::pelanggan(QString id, QString golongan, QString status, int jumlahAnak, int masaLangganan, QString nama, QString alamat, QString telp)
{
    this->id = id;
    this->setGolongan(golongan);
    this->setStatusNikah(status);
    this->setJumlahAnak(jumlahAnak);
    this->setMasaLangganan(masaLangganan);
    this->nama = nama;
    this->alamat = alamat;
    this->telp = telp;
}

void pelanggan::setID(QString ID)
{
    this->id = ID;
}

QString pelanggan::getID()
{
    return this->id;
}

void pelanggan::setNAMA(QString NAMA)
{
    this->nama = NAMA;
}

QString pelanggan::getNAMA()
{
    return this->nama;
}

void pelanggan::setALAMAT(QString ALAMAT)
{
    this->alamat = ALAMAT;
}

QString pelanggan::getALAMAT()
{
    return this->alamat;
}

void pelanggan::setTELP(QString TELP)
{
    this->telp = TELP;
}

QString pelanggan::getTElP()
{
    return this->telp;
}
