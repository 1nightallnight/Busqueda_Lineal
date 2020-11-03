#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &Nombre_Equipo, const string &Sistema_Operativo, const string &Modelo, const string &Memoria_Ram)
{
    this-> Sistema_Operativo=Sistema_Operativo;
    this-> Modelo=Modelo;
    this-> Nombre_Equipo=Nombre_Equipo;
    this-> Memoria_Ram=Memoria_Ram;
}

void Computadora::setNombre_Equipo(const string &v)
{
    Nombre_Equipo=v;
}

string Computadora::getNombre_Equipo()
{
    return Nombre_Equipo;
}

void Computadora::setMemoria_Ram(const string &v)
{
    Memoria_Ram=v;
}

string Computadora::getMemoria_Ram()
{
    return Memoria_Ram;
}

void Computadora::setModelo(const string &v)
{
    Modelo=v;
}

string Computadora::getModelo()
{
    return Modelo;
}

void Computadora::setSistema_Operativo(const string &v)
{
    Sistema_Operativo=v;
}

string Computadora::getSistema_Operativo()
{
    return Sistema_Operativo;
}
