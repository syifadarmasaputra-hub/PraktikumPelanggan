#include "formpelanggan.h"
#include "ui_formpelanggan.h"
#include "QMessageBox"

Formpelanggan::Formpelanggan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formpelanggan)
{
    ui->setupUi(this);

    pelanggan uji;
    // QSqlQuery sql(koneksi);

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_penggajian");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi";

    }

    loadTablepelanggan();

}

void Formpelanggan::loadTablePelanggan()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT*FROM Pelanggan ORDER BY ID ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Pelanggan"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Alamat"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Telp"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Golongan"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("Status"));
    tabelModel->setHeaderData(6,Qt::Horizontal,QObject::tr("Jumlah Anak"));
    tabelModel->setHeaderData(7,Qt::Horizontal,QObject::tr("Masa Langganan"));
    tabelModel->setHeaderData(8,Qt::Horizontal,QObject::tr("Bayar Total"));

    ui->tablePelanggan->setModel(tabelModel);
    ui->tablePelanggan->setColumnWidth(0,100);
    ui->tablePelanggan->setColumnWidth(1,250);
    ui->tablePelanggan->setColumnWidth(2,300);
    ui->tablePelanggan->setColumnWidth(3,100);
    ui->tablePelanggan->setColumnWidth(4,100);
    ui->tablePelanggan->setColumnWidth(5,100);
    ui->tablePelanggan->setColumnWidth(6,100);
    ui->tablePelanggan->setColumnWidth(7,100);
    ui->tablePelanggan->setColumnWidth(8,100);
    ui->tablePelanggan->show();
}

Formpelanggan::~Formpelanggan()
{
    delete ui;
}

void Formpelanggan::on_pushButton_clicked()
{
    if(ui->IDLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "ID Belum Di Isi");
        ui->nIKLineEdit->setFocus();
    }else if(ui->namaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Nama Belum Di Isi");
        ui->namaLineEdit->setFocus();
    }else if(ui->telpLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Telp Belum Di Isi");
        ui->telpLineEdit->setFocus();
    }else if(ui->alamatLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Alamat Belum Di Isi");
        ui->alamatLineEdit->setFocus();
    }else if(ui->golonganComboBox->currentText().isEmpty()){
        QMessageBox::information(this, "warning", "Golongan Belum Di Isi");
        ui->golonganComboBox->setFocus();
    }else if(ui->statusNikahComboBox->currentText().isEmpty()){
        QMessageBox::information(this, "warning", "Golongan Belum Di Isi");
        ui->statusNikahComboBox->setFocus();
    }else if(ui->jumlahAnakLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Jumlah Anak Belum Di Isi");
        ui->jumlahAnakLineEdit->setFocus();
    }else if(ui->masaLanggananLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Masa Langganan Belum Di Isi");
        ui->masaLanggananLineEdit->setFocus();
    }else {
        QSqlQuery duplikat;
        duplikat.prepare("SELECT * FROM pelanggan WHERE id = '"+ui->IDLineEdit->text()+"'");
        duplikat.exec();
        if(duplikat.next()){
            QMessageBox::information(this, "warning", "ID sdh terdaftar");
            ui->namaLineEdit->setText(duplikat.value(1).toString());
            ui->alamatLineEdit->setText(duplikat.value(2).toString());
            ui->telpLineEdit->setText(duplikat.value(3).toString());
            ui->golonganComboBox->setCurrentText(duplikat.value(4).toString());
            ui->statusNikahComboBox->setCurrentText(duplikat.value(5).toString());
            ui->jumlahAnakLineEdit->setText(duplikat.value(6).toString());
            ui->masaKerjaLineEdit->setText(duplikat.value(7).toString());
            ui->bayarTotalLineEdit->setText(duplikat.value(8).toString());
        }else{
            uji.setGolongan(ui->golonganComboBox->currentText());
            uji.setStatusNikah(ui->statusNikahComboBox->currentText());
            uji.setJumlahAnak(ui->jumlahAnakLineEdit->text().toInt());
            uji.setMasaLangganan(ui->masaLanggananLineEdit->text().toInt());

            QSqlQuery sql(koneksi);
            sql.prepare("INSERT INTO karyawan (id,nama,alamat,telp,golongan,status,anak,masa,langganan)"
                        "VALUE(:id,:nama,:alamat,:telp,:golongan,:status,:anak,:masa,:langganan)");
            sql.bindValue(":id",ui->IDLineEdit->text());
            sql.bindValue(":nama",ui->namaLineEdit->text());
            sql.bindValue(":alamat",ui->alamatLineEdit->text());
            sql.bindValue(":telp",ui->telpLineEdit->text());
            sql.bindValue(":golongan",ui->golonganComboBox->currentText());
            sql.bindValue(":status",ui->statusNikahComboBox->currentText());
            sql.bindValue(":anak",ui->jumlahAnakLineEdit->text().toInt());
            sql.bindValue(":masa",ui->masaLanggananLineEdit->text().toInt());
            sql.bindValue(":bayar",uji.getBayarTotal());
            if (sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Di simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }


    // sql.prepare("INSERT INTO pelanggan (id,nama,alamat,telp,golongan,status,anak,masa,bayar)"
    //             "VALUE (?,?,?,?,?,?,?,?,)");
    // sql.addBindValue(ui->IDLineEdit->text());
    // sql.addBindValue(ui->namaLineEdit->text());
    // sql.addBindValue(ui->alamatLineEdit->text());
    // sql.addBindValue(ui->telpLineEdit->text());
    // sql.addBindValue(ui->golonganComboBox->currentText());
    // sql.addBindValue(ui->statusNikahComboBox->currentText());
    // sql.addBindValue(ui->jumlahAnakLineEdit->text());
    // sql.addBindValue(ui->masaLanggananLineEdit->text());
    // sql.addBindValue(uji.getBayarTotal());


    // if (!sql.exec("INSERT INTO pelanggan (id,nama,alamat,telp,golongan,status,anak,masa,bayar)"
    //             "VALUE('100142','anwar','BJM','085149','I','menikah','1','2','3200000')")){
    //     qDebug()<<sql.lastError().text();
    // }else{
    //     qDebug()<<"Data Berhasil Disimpan";
    // }

}

void Formpelanggan::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE pelanggan SET nama=:nama, alamat=:alamat, telp=:telp, "
                "golongan=:golongan, status=:status, anak=:anak, masa=:masa, bayar=:bayar where id=:id ");
    sql.bindValue(":id",ui->IDLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telp",ui->telpLineEdit->text());
    sql.bindValue(":golongan",ui->golonganComboBox->currentText());
    sql.bindValue(":status",ui->statusNikahComboBox->currentText());
    sql.bindValue(":anak",ui->jumlahAnakLineEdit->text().toInt());
    sql.bindValue(":masa",ui->masaKerjaLineEdit->text().toInt());
    sql.bindValue(":bayar",uji.getBayarTotal());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di ubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

void Formpelanggan::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM pelanggan WHERE id=:id");
    sql.bindValue(":id",ui->IDLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

void Formpelanggan::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM pelanggan WHERE id=:id");
    sql.bindValue(":id",ui->IDLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}

void Formpelanggan::on_tablePelanggan_activated(const QModelIndex &index)
{
    int baris = ui->tablePelanggan->currentIndex().row();
    // QMessageBox::information(this, "warning", QString::number(baris));
    ui->IDLineEdit->setText(ui->tablePelanggan->model()->index(baris,0).data().toString());
    ui->namaLineEdit->setText(ui->tablePelanggan->model()->index(baris,1).data().toString());
    ui->alamatLineEdit->setText(ui->tablePelanggan->model()->index(baris,2).data().toString());
    ui->telpLineEdit->setText(ui->tablePelanggan->model()->index(baris,3).data().toString());
    ui->golonganComboBox->setCurrentText(ui->tablePelanggan->model()->index(baris,4).data().toString());
    ui->statusNikahComboBox->setCurrentText(ui->tablePelanggan->model()->index(baris,5).data().toString());
    ui->jumlahAnakLineEdit->setText(ui->tablePelanggan->model()->index(baris,6).data().toString());
    ui->masaKerjaLineEdit->setText(ui->tablePelanggan->model()->index(baris,7).data().toString());
    ui->bayarTotalLineEdit->setText(ui->tablePelanggan->model()->index(baris,8).data().toString());
}
