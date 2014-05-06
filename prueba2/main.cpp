#include <iostream>

using namespace std;

int main()
{
    cout<<"Ingrese un numero: (NOTA: 1)sea par 2)entre 1-10)\n";
    int numero;
    cin>>numero;

    if(numero<10&&numero>0&&(numero%2==0))
    {

        char resp;
        cout<<"Desea continuar: si[S] no[N]";
        cin>>resp;
        if(resp=='S')
        {
            int cont=1;
            int acum=1;
            do
            {
                acum=cont*acum;
                cont++;
            }
            while(cont<=numero);
            cout<<"El factorial de "<<numero<<" es: "<<acum;

        }
        else
        {

            cout<<"Proceso terminado...";
        }

    }
    else
    {
        cout<<"No es par";

    }


    return 0;
}
