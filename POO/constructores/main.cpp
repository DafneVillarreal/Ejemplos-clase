#include <iostream>
#include "prenda.h"

using namespace std;

int main()
{
    Prenda camisa('M', "Azúl", 55.66);
    Prenda vestido('S', "Turquesa", 77.88);
    Prenda pantalon('G');

    cout <<camisa.getTalla() <<endl
        <<camisa.getColor() <<endl
       <<camisa.getPrecio() <<endl <<endl;

    cout <<vestido.getTalla() <<endl
        <<vestido.getColor() <<endl
       <<vestido.getPrecio() <<endl <<endl;

    cout <<pantalon.getTalla() <<endl
        <<pantalon.getColor() <<endl
       <<pantalon.getPrecio() <<endl <<endl;

    return 0;
}
