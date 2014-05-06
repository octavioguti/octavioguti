#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
ingresar un numero entero, luego preguntar si desea continuar
al final presentar cuantos fueron numeros pares e impare.
*/

int main()
{ int numero,cp,ci;
char resp; //char es caracter
ci=0;
cp=0;
do
{
    cout<<"Ingresar un numero:";
    cin>>numero;
    if (numero%2==0)
    {
        cp++;
    }
    else
    {
        ci++;
    }
    do
    {
        cout<<"Desea continuar S/N?..:";
        //resp=getche()
        cin.get(resp);
        _flushall(); //limpiar los enter
    }while ((resp !='S')and (resp !='N'));

}while ((resp !='N'));
 cout<<"Contador de pares..:"<<cp<<"\n";
 cout<<"Contador de impares...:"<<ci<<"\n";

}
