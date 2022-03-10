#include "deportista.h"

Deportista::Deportista()
{
    deporte = "-";
    estatura = 0.0;
    peso = 0.0;
}

string Deportista::getDeporte() const
{
    return deporte;
}

void Deportista::setDeporte(const string &value)
{
    deporte = value;
}

float Deportista::getEstatura() const
{
    return estatura;
}

void Deportista::setEstatura(float value)
{
    estatura = value;
}

float Deportista::getPeso() const
{
    return peso;
}

void Deportista::setPeso(float value)
{
    peso = value;
}
