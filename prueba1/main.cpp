#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;
/*generar 10 numeros aleatorios y contar los numeros
que son divisibles entre 5 y obtener su promedio.
obtener el promedio de todos los numeros ingresados y presentar la
suma
*/

int main()
{
    int numero, num5=0,suma=0, sumatotal=0;
    int c=0;
    double promedio5=0;
    double promediototal=0;
    srand (time(0));



    while (c<10)
    {
        numero= 1+rand()%(100-1);
        cout<<"generar numero...:";
        cout<<numero<<"\n";
        //
        if (numero%5==0)
        {
            promedio5=numero+promedio5;
            suma++;
        }

        promediototal=numero+promediototal;


         c++;
        }


    cout<<"Resultados...";
    cout<<"Numeros divisibles entre 5...: "<<suma<<"\n";
    cout<<"Promedio..:"<<promedio5/suma<<"\n";
    cout<<"Promedio total..."<<promediototal/10<<"\n";
    cout<<"Suma total.."<<promediototal<<"\n";

}
