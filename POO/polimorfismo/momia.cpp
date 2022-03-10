#include "momia.h"

Momia::Momia()
{
    setTipo("Momia");
    setAtaque("Rasguño");
    setEnergia(20);
    setFuerza(6);
}

void Momia::atacar()
{
    cout <<getTipo() <<" ataca con " <<getAtaque() <<" y causa "
        <<getFuerza() <<" de daño." <<endl;
}
