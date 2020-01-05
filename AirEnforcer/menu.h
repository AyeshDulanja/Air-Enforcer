#ifndef MENU_H
#define MENU_H

#include <QDialog>

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_btnnewgame_clicked();

    void on_btnexit_clicked();

    void on_btnabout_clicked();

    void on_btnhowto_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
