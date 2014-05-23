#include <iostream>
#include <stdlib.h>
#include "time.h"

using namespace std;

int main()
{
    srand(time(0));
    int numero=1+rand()%(300-1);
    int aux=0;
    int residuo;
    int mayor=0;
    cout<<"Numero aleatorio: "<<numero<<endl;
    while (numero>10)
    {
        residuo=numero%10;
        numero=numero/10;
        aux+=residuo;
        if(mayor<residuo)
            mayor=residuo;
    }
    if(mayor<numero)
        mayor=numero;

    cout<<"numeros sumados: "<<numero+aux<<endl;
    cout<<"numero mayor:"<<mayor;

    return 0;
}
