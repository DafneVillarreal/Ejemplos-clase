#ifndef VAMPIRO_H
#define VAMPIRO_H
#include <iostream>
#include "enemigo.h"

using namespace std;

class Vampiro : public Enemigo
{
public:
    Vampiro();

    int getGanancia() const;
    void setGanancia(int valor);

    void atacar();

private:
    int ganancia;
};

#endif // VAMPIRO_H
