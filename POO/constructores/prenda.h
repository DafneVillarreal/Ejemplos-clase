#ifndef PRENDA_H
#define PRENDA_H
#include <iostream>

using namespace std;

class Prenda
{
public:
    Prenda(char talla='S', const string& color="Blanco", float precio=0.0);

    char getTalla() const;
    void setTalla(char value);

    string getColor() const;
    void setColor(const string &value);

    float getPrecio() const;
    void setPrecio(float value);

private:
    char talla;
    string color;
    float precio;
};

#endif // PRENDA_H
