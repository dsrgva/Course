#ifndef DOCTORS_H
#define DOCTORS_H

#include <QDialog>
#include <QWidget>

namespace Ui {
class Doctors;
}

class Doctors : public QDialog
{
    Q_OBJECT

public:
    explicit Doctors(QWidget *parent = nullptr);
    ~Doctors();

private slots:

    void on_pushButton_2_clicked();

private:
    Ui::Doctors *ui;
};

#endif // DOCTORS_H
