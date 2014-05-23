#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int notafinal(int notaAcumulada, int notaExamen)
{
    int notafinal;
    notafinal=notaAcumulada+notaExamen;
    return notafinal;
}
void ingreso (char nombre[],int &notaAcumulada,int &notaExamen)
{
    cout<<"Ingresar nombre...";
    cin.getline(nombre,30);
    cout<<"ingresar nota acumulada...:";
    cin>>notaAcumulada;
    cout<<"Ingresar nota Examen...:";
    cin>>notaExamen;
}
/*

*/
int main()
{ char nombre[30];
  int notaAcumulada,notaExamen,nf;
  ingreso(nombre,notaAcumulada,notaExamen);
  nf=notafinal(notaAcumulada,notaExamen);
  cout<<"Nota final es"<<notafinal<<"\n";

}
