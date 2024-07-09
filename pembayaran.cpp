#include "pembayaran.h"

bayar::bayar() {}

void bayar::setGolongan(QString golongan)
{
    this->golongan=golongan;
}

int bayar::getTunjGolongan()
{
    if (this->golongan=="I"){
        this->tunjGolongan=3000000;
    }else if (this->golongan=="II"){
        this->tunjGolongan=3500000;
    }else if (this->golongan=="III"){
        this->tunjGolongan=4000000;
    }else{
        this->tunjGolongan=4500000;
    }

    return this->tunjGolongan;
}

void bayar::setStatusNikah(QString status)
{
    this->status=status;
}

int bayar::getTunjNikah()
{
    if (this->status=="Menikah"){
        this->tunjNikah=500000;
    }else {
        this->tunjNikah=150000;
    }

    return this->tunjNikah;
}

void bayar::setJumlahAnak(int jumlah)
{
    this->jumlahAnak=jumlah;
}

int bayar::getTunjAnak()
{
    if (this->jumlahAnak==0){
        this->tunjAnak=0;
    }else if (this->jumlahAnak>=1 && this->jumlahAnak<=2){
        this->tunjAnak=200000;
    }else if (this->jumlahAnak>=3 && this->jumlahAnak<=4){
        this->tunjAnak=400000;
    }else {
        this->tunjAnak=500000;
    }

    return this->tunjAnak;
}

void bayar::setMasaLangganan(int jumlah)
{
    this->masaLangganan=jumlah;
}

int bayar::getTunjMasaLangganan()
{
    if (this->masaLangganan>=0 && this->masaLangganan<=2){
        this->tunjMasaLangganan=350000;
    }else if (this->masaLangganan>=3 && this->masaLangganan<=4){
        this->tunjMasaLangganan=550000;
    }else {
        this->tunjMasaLangganan=750000;
    }

    return this->tunjMasaLangganan;
}

int bayar::getBayarTotal()
{
    return getTunjGolongan()+getTunjNikah()+getTunjAnak()+getTunjMasaLangganan();
}
