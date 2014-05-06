#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/* estructuras de repeticion
ingresar 5 numero y presentar al final
del ciclo la suma de los
numeros ingresados */

int main()
{
    int num, suma50,suma;
    int mayor50;
    int c=0;
    suma=0;
    mayor50=0;
    suma50=0;
    while (c<5)
    {
        cout<<"ingrese un numero...";
        cin>>num;
        if (num>50)
        {
            mayor50++;
            suma50=suma50+num;
        }
        c= c+1; //estamos contando
        suma= suma + num; //sumando los numeros ingresados


    }//final del ciclo
    cout<<"numeros mayores a 50 es....:"<<mayor50<<"\n";
    cout<<"suma de los numeros es...:"<<suma<<"\n";
    cout<<"suma de los numeros mayores a 50..:"<<suma50<<"\n";
    system("PAUSE");

}
