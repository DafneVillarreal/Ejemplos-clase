#include <iostream>
#include "grupo.h"

using namespace std;

int main()
{
    Grupo g;

    g.setMateria("Estructuras de Datos I");
    g.setSeccion("D07");
    g.setNrc("42369");
    g.menu();

    return 0;
}
