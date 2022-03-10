#ifndef DEPORTISTA_H
#define DEPORTISTA_H
#include <iostream>
#include "persona.h"

using namespace std;

class Deportista : public Persona
{
public:
    Deportista();

    string getDeporte() const;
    void setDeporte(const string &value);

    float getEstatura() const;
    void setEstatura(float value);

    float getPeso() const;
    void setPeso(float value);

private:
    string deporte;
    float estatura;
    float peso;
};

#endif // DEPORTISTA_H
