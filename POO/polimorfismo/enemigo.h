#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <iostream>

using namespace std;

class Enemigo
{
public:
    Enemigo();

    string getTipo() const;
    void setTipo(const string &valor);

    string getAtaque() const;
    void setAtaque(const string &valor);

    int getEnergia() const;
    void setEnergia(int valor);

    int getFuerza() const;
    void setFuerza(int valor);

    //Creamos un método virtual puro, por lo tanto la clase es abstracta.
    virtual void atacar() = 0;

private:
    string tipo;
    string ataque;
    int energia;
    int fuerza;
};

#endif // ENEMIGO_H
