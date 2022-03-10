#include <iostream>
#include "enemigo.h"
#include "momia.h"
#include "vampiro.h"
#include <time.h>

using namespace std;

int main()
{
    const int MAX_ENEMIGOS = 10;
    int aleatorio;
    Enemigo* enemigos[MAX_ENEMIGOS];
    srand(time(NULL));

    for (int i(0); i < MAX_ENEMIGOS; ++i)
    {
        aleatorio = rand() % 2;

        if (aleatorio == 0)
        {
            Momia* m = new Momia();
            enemigos[i] = m;
        }
        else
        {
            Vampiro* v = new Vampiro();
            enemigos[i] = v;
        }
    }
    for (int i(0); i < MAX_ENEMIGOS; ++i)
    {
        enemigos[i]->atacar();
    }

    //Enemigo e;
    //Momia m;
    //Vampiro v;

    return 0;
}
