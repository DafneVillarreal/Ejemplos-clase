#include "prenda.h"

Prenda::Prenda(char talla, const string &color, float precio)
    : talla(talla), color(color), precio(precio)
{
    /*this->talla = talla;
    this->color = color;
    this->precio = precio;*/
}

char Prenda::getTalla() const
{
    return talla;
}

void Prenda::setTalla(char value)
{
    talla = value;
}

string Prenda::getColor() const
{
    return color;
}

void Prenda::setColor(const string &value)
{
    color = value;
}

float Prenda::getPrecio() const
{
    return precio;
}

void Prenda::setPrecio(float value)
{
    precio = value;
}
