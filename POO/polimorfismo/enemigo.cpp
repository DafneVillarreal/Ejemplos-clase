#include "enemigo.h"

Enemigo::Enemigo()
{

}

string Enemigo::getTipo() const
{
    return tipo;
}

void Enemigo::setTipo(const string &valor)
{
    tipo = valor;
}

string Enemigo::getAtaque() const
{
    return ataque;
}

void Enemigo::setAtaque(const string &valor)
{
    ataque = valor;
}

int Enemigo::getEnergia() const
{
    return energia;
}

void Enemigo::setEnergia(int valor)
{
    energia = valor;
}

int Enemigo::getFuerza() const
{
    return fuerza;
}

void Enemigo::setFuerza(int valor)
{
    fuerza = valor;
}
