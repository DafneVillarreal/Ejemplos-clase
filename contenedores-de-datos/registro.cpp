#include <iostream>

using namespace std;

//Declaración de un Registro tipo Persona
struct Persona
{
    string  nombre;
    int     edad;
    float   estatura;
};

int main()
{
    //Instancia o variable tipo Persona
    Persona persona1;
    Persona persona2;
    Persona persona3 = {"Pedro Navajas", 150, 2.10};

    //Asignar valor a los campos del registro
    persona1.nombre = "José Nava";
    persona1.edad = 99;
    persona1.estatura = 1.60;

    cout <<"Datos de la persona 1" << endl
        <<"Nombre: " <<persona1.nombre <<endl
       <<"Edad: " <<persona1.edad <<endl
      <<"Estatura: " <<persona1.estatura <<endl <<endl;

    cout <<"Ingresa los datos de una persona" <<endl
        <<"Nombre: ";
    getline(cin, persona2.nombre);
    cout <<"Edad: ";
    cin >>persona2.edad;
    cout <<"Estatura: ";
    cin >>persona2.estatura;

    cout <<"Datos registrados: " <<endl
        <<"Nombre: " <<persona2.nombre <<endl
       <<"Edad: " <<persona2.edad <<endl
      <<"Estatura: " <<persona2.estatura <<endl <<endl;

    cout <<"Datos de la persona 3:" <<endl
        <<"Nombre: " <<persona3.nombre <<endl
       <<"Edad: " <<persona3.edad <<endl
      <<"Estatura: " <<persona3.estatura <<endl <<endl;

    //Asignación
    Persona p4 = persona3;

    if (persona1.edad < persona2.edad)
    {
        cout <<"La persona 1 es más joven " <<endl;
    }
    else
    {
        cout <<persona2.nombre <<" tiene menos edad que " <<persona1.nombre <<endl;
    }

    return 0;
 }
