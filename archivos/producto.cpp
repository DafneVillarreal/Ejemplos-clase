#include "producto.h"

Producto::Producto(string nombre, float precio, int existencia) :
    nombre(nombre), precio(precio), existencia(existencia)
{
    //this->nombre = nombre;
}

string Producto::getNombre() const
{
    return nombre;
}

void Producto::setNombre(const string &valor)
{
    nombre = valor;
}

float Producto::getPrecio() const
{
    return precio;
}

void Producto::setPrecio(float valor)
{
    precio = valor;
}

int Producto::getExistencia() const
{
    return existencia;
}

void Producto::setExistencia(int valor)
{
    existencia = valor;
}

ostream& operator <<(ostream& os, const Producto& obj)
{
    os <<obj.getNombre() <<"|" <<obj.getPrecio() <<"|" <<obj.getExistencia() <<endl;
    return os;
}

istream& operator >>(istream& is, Producto& obj)
{
    string aux;
    getline(is, aux, '|');
    if (aux.size() > 0)
    {
        obj.setNombre(aux);
        getline(is, aux, '|');
        obj.setPrecio(stof(aux)); //String TO Float
        getline(is, aux);
        obj.setExistencia(stoi(aux)); //String TO Integer
    }
    return is;
}
