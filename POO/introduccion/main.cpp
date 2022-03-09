#include <iostream>
//Incluimos la biblioteca de Persona
#include "persona.h"

using namespace std;

int main()
{
    //Instancia de la clase Persona.
    Persona persona1;
    Persona persona2;
    string nom;
    int edad;
    float peso;

    persona1.setNombre("Susana D.");
    persona1.setEdad(55);
    persona1.setPeso(66.77);
    cout <<"Nombre: " <<persona1.getNombre() <<endl
        <<"Edad: " <<persona1.getEdad() <<endl
       <<"Peso: " <<persona1.getPeso() <<endl <<endl;

    cout <<"Ingresa el nombre de la persona: ";
    getline(cin, nom);
    cout <<"Ingresa la edad: ";
    cin >>edad;
    cout <<"Ingresa el peso: ";
    cin >>peso;
    persona2.setNombre(nom);
    persona2.setEdad(edad);
    persona2.setPeso(peso);

    cout <<"Datos registrados: " <<endl
        <<"Nombre: " <<persona2.getNombre() <<endl
       <<"Edad: " <<persona2.getEdad() <<endl
      <<"Peso: " <<persona2.getPeso() <<endl <<endl;

    persona1.hablar("Hola mucho gusto.");
    persona2.hablar("Ni te topo.");
    persona1.comer("Tacos");
    persona2.comer("Takis fuego");

    return 0;
}
