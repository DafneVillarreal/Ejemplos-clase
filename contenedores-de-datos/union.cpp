#include <iostream>

using namespace std;

union Peso
{
    int     gramos;
    float   kilos;
};

int main()
{
    Peso cantidad;
    Peso p;

    cantidad.gramos = 250;
    cout <<"Cantidad: " <<cantidad.gramos <<" gramos" <<endl;

    cantidad.kilos = 3.5;
    cout <<"Cantidad: " <<cantidad.kilos <<" kilos" <<endl;

    //p = cantidad;

    return 0;
}
