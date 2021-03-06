#ifndef BASEDEDATOS_H
#define BASEDEDATOS_H

#include <QObject>

#include<QSql>
#include<QSqlDatabase>
#include<QSqlTableModel>
#include<QSqlError>
#include<QSqlRecord>
#include<QSqlQuery>

#include<QDebug>
#include<QVector>

class BaseDeDatos
{
public:
    BaseDeDatos();
    void escogerTabla(QString tabla);
    bool crearTabla(QString nombre);
    int getId();
    int busquedaLineal(QString usu, QString con);
    QVector<QString> getDatos();
    QVector<QString> busquedaLineal(QString cedula);
    bool cambiarUsuarioContra(QVector<QString> datos);
    bool insertarFila(QVector<QString> datos);
    bool modificarFila(QVector<QString> datos);
    bool eliminarFila(int indice);
    bool crearTarjeta(QVector<QString> datos);
private:
    QString hostName;
    QString userName;
    QString password;
    QString dataBaseName;
    const QVector<QString> cargos{"Asesor comercial", "Gerente de ventas",  "Vendedor"};
    QSqlTableModel *dbModel;
    QSqlDatabase db;

    int indice;
};

#endif // BASEDEDATOS_H
