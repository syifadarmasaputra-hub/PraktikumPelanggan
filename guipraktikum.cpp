#include "guipraktikum.h"
#include "ui_guipraktikum.h"
#include "qstring.h"

guiPraktikum::guiPraktikum(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::guiPraktikum)
{
    ui->setupUi(this);
    myForm = new Formpelanggan;
}

guiPraktikum::~guiPraktikum()
{
    delete ui;
}

void guiPraktikum::on_pushButton_clicked()
{
    myForm->show();
}
