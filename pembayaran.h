#ifndef PEMBAYARAN_H
#define PEMBAYARAN_H
#include <QString>

class bayar
{
public:
    bayar();

    void setGolongan(QString golongan);
    int getTunjGolongan();

    void setStatusNikah(QString status);
    int getTunjNikah();

    void setJumlahAnak(int jumlah);
    int getTunjAnak();

    void setMasaLangganan(int jumlah);
    int getTunjMasaLangganan();

    int getBayarTotal();

private:
    QString golongan, status;
    int tunjGolongan, tunjNikah, tunjAnak, tunjMasaLangganan, bayarTotal;
    int jumlahAnak, masaLangganan;

};

#endif // PEMBAYARAN_H
