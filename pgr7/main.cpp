#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
generar un numero random entre 1-350 y determinar el rango en que
se encuentra
1-50
51-120
120-200
200-
*/

int main()
{
    int numero;
    srand(time(0));
    numero= 1+rand()%(350-1);

    cout<< "numero generado es..." <<numero<<"\n";

    if ((numero>=1) and (numero<=50))
    {cout<<"numero se encuentra entre 1-50...";}

    else if ((numero>=51) and (numero<=120))
    {cout<<"numero se encuentra entre 51-120....";}
    else if ((numero>=121) and (numero<=200))
    {cout<<"numero se encuentra entre 121-200...";}
    else
    cout<<"\n";

    system("PAUSE");



    }

