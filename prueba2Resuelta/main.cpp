#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    char resp;
    int numero, factorial;

    do
    {
        do
        {
            cout<<"ingresar un numero par entre 1-10..:";
            cin>>numero;
        }while (!(numero%2==0) and (numero>=1) and (numero<=10));
        factorial=1;
        for (int i=1;i<=numero;i++)
        {
            factorial *=i;
        }
        cout<<"factorial de..."<<numero<<"es..."<<factorial<<"\n";
        _flushall();
        do
        {
            cout<<"desea continuar S/N..:";
            cin.get(resp);

            _flushall();
        }while ((resp!='S')and (resp!='N'));

        }while(resp!='N');

}
