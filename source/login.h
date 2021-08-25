#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QWidget>
#include "user.h"
#include "doctors.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT
public:
    QString username;
    QSqlDatabase new_db;
    void connClose(){
        new_db.close();
        new_db.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        new_db = QSqlDatabase::addDatabase("QSQLITE");
        new_db.setDatabaseName("C:/Project/database/mydb.db");

        if(!new_db.open()){
            qDebug()<<("В открытии базы данных произошла ошибка");
            return false;
        }
        else {
            qDebug()<<("Соединение установлено");
            return true;
        }
    }
public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Login *ui;
};
#endif // LOGIN_H
