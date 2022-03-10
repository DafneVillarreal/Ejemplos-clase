#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>

using namespace std;

class Producto
{
public:
    Producto(string nombre="", float precio=0.0, int existencia=0);

    string getNombre() const;
    void setNombre(const string &valor);

    float getPrecio() const;
    void setPrecio(float valor);

    int getExistencia() const;
    void setExistencia(int valor);

    friend ostream& operator << (ostream& os, const Producto& obj);
    friend istream& operator >> (istream& is, Producto& obj);

private:
    string nombre;
    float precio;
    int existencia;
};

#endif // PRODUCTO_H
