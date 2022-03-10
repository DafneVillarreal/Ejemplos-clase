#include "estudiante.h"

Estudiante::Estudiante()
{
    codigo = "-";
    creditos = 0;
    promedio = 0.0;
}

string Estudiante::getCodigo() const
{
    return codigo;
}

void Estudiante::setCodigo(const string &valor)
{
    codigo = valor;
}

int Estudiante::getCreditos() const
{
    return creditos;
}

void Estudiante::setCreditos(int valor)
{
    creditos = valor;
}

float Estudiante::getPromedio() const
{
    return promedio;
}

void Estudiante::setPromedio(float valor)
{
    promedio = valor;
}
