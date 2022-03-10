#include <iostream>
#include "persona.h"
#include "estudiante.h"
#include "deportista.h"

using namespace std;

int main()
{
    Persona per1;
    Estudiante est1;
    Deportista dep1;

    per1.setNombre("Lucy");
    per1.setNacionalidad("Alemana");
    per1.setEdad(77);

    est1.setNombre("Juan");
    est1.setNacionalidad("Rumano");
    est1.setEdad(24);
    est1.setCodigo("6543643");
    est1.setCreditos(75);
    est1.setPromedio(97.53);

    dep1.setNombre("Jaime");
    dep1.setNacionalidad("Sudafricano");
    dep1.setEdad(25);
    dep1.setDeporte("Ciclismo");
    dep1.setPeso(78.5);
    dep1.setEstatura(1.84);

    return 0;
}
