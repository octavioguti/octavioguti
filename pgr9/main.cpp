#include <iostream>
#include <stdlib.h>
#include <time.h>

/* ingresar 5 numeros y que diga los impares o pares, al final el promedio de los numeros pares e impares
y los contadores */

using namespace std;

int main()
{
   int Cpar,Cimpar,numero,c;
   cpar=0;
   cimpar=0;
   c=0;

   while (c<5)
   {
       cout<<"ingresar un numero...>";
       cin>>numero;
       if (numero%2==0)
       {
           Cpar++;
       }
       else
       {
           Cimpar++;
       }
       c++;
   }
   cout<<"numero de pares es"<<Cpar<<"\n";
   cout<<"numero de impares es"<<Cimpar<<"\n";
}
