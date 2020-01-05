#ifndef HOWTO_H
#define HOWTO_H

#include <QDialog>

namespace Ui {
class howto;
}

class howto : public QDialog
{
    Q_OBJECT

public:
    explicit howto(QWidget *parent = nullptr);
    ~howto();

private slots:
    void on_pushButton_clicked();

private:
    Ui::howto *ui;
};

#endif // HOWTO_H
