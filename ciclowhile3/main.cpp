#include <iostream>

using namespace std;
/* ingresar 5 numeros y presentar al final del ciclo cual fue el
numero mayor*/

int main()
{
    int numero, numMayor,c;
    int numeroMenor;
    numeroMenor=10000;
    numMayor=0;
    c=0;

    while (c<5)
    {
        cout<<"ingresar numero...>";
        cin>>numero;

        if(numero>numMayor)
        {
            numMayor=numero;
        }
        c++;

        if(numero<numeroMenor)
        {
            numeroMenor=numero;
        }

    }
    cout<<"mayor de todos los numeros es.."<<numMayor<<"\n";
    cout<<"menor de todos los numeros es ..."<<numeroMenor<<"\n";
}
