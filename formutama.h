#ifndef FORMUTAMA_H
#define FORMUTAMA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class FormUtama;
}
QT_END_NAMESPACE

class FormUtama : public QMainWindow
{
    Q_OBJECT

public:
    FormUtama(QWidget *parent = nullptr);
    ~FormUtama();

private:
    Ui::FormUtama *ui;
};
#endif // FORMUTAMA_H
