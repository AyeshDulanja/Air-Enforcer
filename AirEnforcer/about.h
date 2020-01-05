#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>

namespace Ui {
class about;
}

class about : public QDialog
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = nullptr);
    ~about();

private slots:
    void on_pushButton_clicked();

    void on_fb_clicked();

    void on_yt_clicked();

    void on_insta_clicked();

    void on_github_clicked();

private:
    Ui::about *ui;
};

#endif // ABOUT_H
