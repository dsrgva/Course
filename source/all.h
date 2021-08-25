#ifndef ALL_H
#define ALL_H

#include <QDialog>

namespace Ui {
class ALL;
}

class ALL : public QDialog
{
    Q_OBJECT

public:
    explicit ALL(QWidget *parent = nullptr);
    ~ALL();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ALL *ui;
};

#endif // ALL_H
