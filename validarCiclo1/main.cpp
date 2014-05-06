#include <iostream>
#include <stdio.h>

using namespace std;
/*
Ingresar un numero divisible entre 5, validarlo
luego preguntar si desea continuar, al final presentar la suma de los numeros.
*/

int main()
{
   int num,suma;
   char resp;
   suma=0;
   do
   {
       do
       {
           cout<<"Ingresar un numero divisible entre 5...";
           cin>>num;

       }while (num%5!=0);//validar que el numero sea divisible entre 5
       suma= suma+num;

       _flushall();
       do
       {
           cout<<"desea continuar S/N...:";
           cin.get(resp);

           _flushall();

       }while ((resp!='S')and(resp!='N'));// validar respuesta

   }while (resp!='N');
   //presentar la suma de los numeros
   cout<<"suma de los numeros div 5...:"<<suma<<"\n";

}
