#include "persona.h"

//Este archivo contiene la implementación o definición de la clase.

//Implementación del Constructor
Persona::Persona()
{
    cout <<"¡Hola mundo! :D" <<endl <<endl;
    nombre = "-";
    edad = 0;
    peso = 0.0;
}

Persona::~Persona()
{
    cout <<nombre <<" Aaayyyy nooooo la morición" <<endl;
}

void Persona::setNombre(const string& valor)
{
    nombre = valor;
}

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setPeso(float valor)
{
    peso = valor;
}

float Persona::getPeso() const
{
    return peso;
}

int Persona::getEdad() const
{
    return edad;
}

void Persona::setEdad(int value)
{
    edad = value;
}

void Persona::hablar(const string& mensaje)
{
    cout <<"-" <<nombre <<": " <<mensaje <<endl;
}

void Persona::comer(const string& alimento)
{
    cout <<nombre <<" está comiendo: " <<alimento <<endl;
}
