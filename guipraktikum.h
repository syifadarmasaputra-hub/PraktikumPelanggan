#ifndef GUIPRAKTIKUM_H
#define GUIPRAKTIKUM_H

#include <QMainWindow>
#include <formpelanggan.h>

namespace Ui {
class guiPraktikum;
}

class guiPraktikum : public QMainWindow
{
    Q_OBJECT

public:
    explicit guiPraktikum(QWidget *parent = nullptr);
    ~guiPraktikum();

private slots:
    void on_pushButton_clicked();

private:
    Ui::guiPraktikum *ui;
    Formpelanggan *myForm;
};

#endif // GUIPRAKTIKUM_H
