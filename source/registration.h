#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include "login.h"

namespace Ui {
class Registration;
}

class Registration : public QDialog
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Registration *ui;
    Login *log;
};

#endif // REGISTRATION_H
