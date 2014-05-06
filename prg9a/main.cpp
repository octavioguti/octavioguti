#include <iostream>

/* ingresar 5 numeros y que diga los impares o pares, al final el promedio de los numeros pares e impares
y los contadores */

using namespace std;

int main()
{
   int Cpar,Cimpar,numero,c;
   int sumapar, sumaimpar,promediopar,promedioimpar;
   sumaimpar=0;
   sumapar=0;
   Cpar=0;
   Cimpar=0;
   c=0;

   while (c<5)
   {
       cout<<"ingresar un numero...>";
       cin>>numero;
       if (numero%2==0)
       {
           Cpar++;
           sumapar=sumapar+numero;
       }
       else
       {
           Cimpar++;
           sumaimpar=sumaimpar+numero;
       }
       c++;
   }
   promedioimpar=sumaimpar/Cimpar;
   promediopar=sumapar/Cpar;
   cout<<"promedio de numeros pares es.."<<promediopar<<"\n";
   cout<<"promedio de numeros impares es.."<<promedioimpar<<"\n";
   cout<<"numero de pares es..."<<Cpar<<"\n";
   cout<<"numero de impares es..."<<Cimpar<<"\n";
}

