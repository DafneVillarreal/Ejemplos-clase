#ifndef PERSONA_H //Si no está definido PERSONA_H
#define PERSONA_H //entonces defínelo
#include <iostream>

using namespace std;
//Este archivo contiene la declaración de la clase.

class Persona
{
public:
    //Constructor de la clase.
    //Método especial que no tiene tipo de retorno y cuyo nombre es el mismo
    //de la clase. Se ejecuta cuando se crea una instancia de la clase.
    Persona();

    //Destructor de la clase.
    //Método especial que no tiene tipo de retorno y cuyo nombre es el mismo
    //de la clase precedido por una tilde. Se ejecuta justo antes de que el
    //objeto será borrado de la memoria.
    virtual ~Persona();

    //Métodos de interfaz.
    //Getters y Setters.
    //Son métodos que permiten acceder a la información de la clase, es decir
    //a los atributos privados. Para cada atributo debe haber un método que
    //me permita asignarle valor y otro que me permita consultarlo.

    //set <-> asignar, establecer
    void setNombre(const string& valor);
    //get <-> obtener, recuperar
    string getNombre() const;

    void setPeso(float valor);
    float getPeso() const;

    int getEdad() const;
    void setEdad(int value);

    void hablar(const string& mensaje);
    void comer(const string& alimento);

private:
    string  nombre;
    float   peso;
    int     edad;
};

#endif // PERSONA_H
