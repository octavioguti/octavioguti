#include <iostream>
#include <stdlib.h>
/*
ingresar un numero y escribir en la pantalla en el rango
que se encuentra el numero.
RANGO
1-100
101-300
301-500
500-

*/


using namespace std;

int main()
{
    int numero;

    cout<<"Ingresar numero entero...>";
    cin>>numero;
    if ((numero>=1) and (numero<=100))
    {
        cout<<"el numero esta en el rango de 1-100";
    }
    else if ((numero>=101) and (numero<=300))
             {
                 cout<<"el numero esta en el rango de 101-300";

             }
             else if ((numero>=301) and (numero<=500))
                      {
                          cout<<"el numero esta en el rango de 301-500";

                      }
                      else if (numero>500)
                        {
                            cout<<"el numero es mayor a 500";

                        }
                        else
                        {
                            cout<<"el numero es negativo";
                        }
                        system("PAUSE");
}


