#include "formutama.h"
#include "ui_formutama.h"

FormUtama::FormUtama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormUtama)
{
    ui->setupUi(this);

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_penggajian");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi";
    }
}

FormUtama::~FormUtama()
{
    delete ui;
}
