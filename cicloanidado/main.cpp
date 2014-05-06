#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
/* generar 10 numeros pares, validar el numero
que el numero sea par un ciclo while y un for para
contar que sea 10 numeros.
*/

int main()
{  srand(time(0));
    int numero, mayor;
    mayor=0;

    for(int i=0;i<10;i++)
    {
        numero=1+rand()%(200-1);
        while (numero%2 !=0) //!=0 distinto a 0, para que sea par//
        {
            numero=1+rand()%(200-1);
        }
        if (numero>mayor)
        {
            mayor=numero;
        }
        cout<<"Numero generado es..:"<<numero<<"\n";
    }



    cout<< "Numero mayor es..."<<mayor<<"\n";
    system("PAUSE");
}
