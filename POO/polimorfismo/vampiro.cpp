#include "vampiro.h"

Vampiro::Vampiro()
{
    setTipo("Vampiro");
    setAtaque("Mordida");
    setFuerza(5);
    setEnergia(18);
    setGanancia(2);
}

int Vampiro::getGanancia() const
{
    return ganancia;
}

void Vampiro::setGanancia(int valor)
{
    ganancia = valor;
}

void Vampiro::atacar()
{
    cout <<getTipo() <<" ataca con " <<getAtaque() <<" y causa "
        <<getFuerza() <<" de daño. " <<getTipo() <<" recupera "
       <<getGanancia() <<" de energía." <<endl;

    setEnergia(getEnergia() + getGanancia());
}
