
#include <guipraktikum.h>
#include <pelanggan.h>
#include <pembayaran.h>
//#include <QtSql>
//#include <QSqlDatabase>
//#include <QSqlError>
//#include <QDebug>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    guiPraktikum g;
    g.show();

    //QSqlDatabase konekDB = QSqlDatabase::addDatabase("QODBC");
    //konekDB.setDatabaseName("dsn_pelanggan");
    //konekDB.setUserName("root");
    //konekDB.setPassword("");
    //konekDB.databaseName("dsn_pelanggan");

     //if (konekDB.open()){
       //  qDebug()<<"Database terkoneksi";
     //}else{
      //   qDebug()<<konekDB.lastError().text();
    // }

    // if (!koneksiDB.open())
    // {

    //      qDebug()<<koneksiDB.lastError().text();

    //     return false;
    // }

    // QSqlQuery sql(koneksiDB);

    // eror
    // sql.prepare("INSERT INTO pelanggan (id,nama,alamat,telp,golongan,status,anak,masa,bayar)"
    //             "VALUES(:id,:nama,:alamat,:telp,:golongan,:status,:anak,:masa,:bayar)");
    //     sql.bindValue(":id","100111");
    //     sql.bindValue(":nama","anwar");
    //     sql.bindValue(":alamat","BJB");
    //     sql.bindValue(":telp","085200");
    //     sql.bindValue(":golongan","II");
    //     sql.bindValue(":status","menikah");
    //     sql.bindValue(":anak","1");
    //     sql.bindValue(":masa","2");
    //     sql.bindValue(":bayar","3200000");

    //     if (sql.exec()){
    //         qDebug()<<"Data Berhasil Disimpan";
    //     }else{
    //         qDebug()<<sql.lastError().text();
    //     }

    // bisa
    // if (!sql.exec("INSERT INTO pelanggan (id,nama,alamat,telp,golongan,status,anak,masa,bayar)"
    //             "VALUE('100141','muhammad','BJM','081933','I','menikah','1','2','3200000')")){
    //     qDebug()<<sql.lastError().text();
    // }else{
    //     qDebug()<<"Data Berhasil Disimpan";
    // }

    // pelanggan k;
    // k.setid("101010");
    // k.setNAMA("FIQRI");
    // k.setALAMAT("Banjarmasin Barat");
    // k.setTELP("081999999");
    // k.setGolongan("I");
    // k.setStatusNikah("Menikah");
    // k.setJumlahAnak(1);
    // k.setMasaLangganan(2);
    // qDebug()<<"ID "<<k.getID()<<"\n";
    // qDebug()<<"NAMA "<<k.getNAMA()<<"\n";
    // qDebug()<<"ALAMAT "<<k.getALAMAT()<<"\n";
    // qDebug()<<"TELP "<<k.getTElP()<<"\n";
    // qDebug()<<"BAYAR POKOK "<<k.getTunjGolongan()<<"\n";
    // qDebug()<<"TUNJ. STATUS "<<k.getTunjNikah()<<"\n";
    // qDebug()<<"TUNJ. ANAK "<<k.getTunjAnak()<<"\n";
    // qDebug()<<"TUNJ. MASA LANGGANAN "<<k.getTunjMasaLagganan()<<"\n";
    // qDebug()<<"BAYAR TOTAL "<<k.getBayarTotal()<<"\n";
    return a.exec();
}
