#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int tam=9;
int numero[tam];
int cf[tam];

void ingreso(int numero[])
{   srand(time(0));                 //procedimiento
   for (int i=0;i<=tam;i++)
   {
       numero[i]=1+rand()%(10-1);
   }

}

void calcular (int numero[],int fact[])
{
    for (int i=0;i<=tam;i++)
    {
        cifras[i]=contarcifras(numero[i]);
    }
}
void presentar(int numero[],int cifras[])
{
    for(int i=0; i<=tam;i++)
    {
        cout<<" El numero "<<numero[i]<<" tiene "<<cifras[i]<<"\n";
    }
}
int contarcifras(int numero)
{
    int cf=1;
    int
    while(numero>10)
    {
        numero=numero/10;
        cf++;
    }
    return cf;
}
void pres_reves(int numero[])
{ int xnum=0;

for (int i=0; i<=tam;i++)
{
    cout<<"Numero "<<numero[i]<<" tiene";
    while (xnum2>=10)
    {
        xnum=xnum2%10;
        xnum2=xnum2/10;
        cout<<xnum;
    }
    cout<<xnum2<<" cifras \n";
}

}
int main()
{
    ingreso(numero);
    calcular(numero,cifras);
    presentar(numero,cifras);
    cout<<"\n\n\n";

}
