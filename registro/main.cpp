#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;
struct alumno
{
    char nombre[30];
    int na,ne,nf;
    char obs[15];
};
alumno alum;

void ingreso(alumno &alum)
{
    cout<<" Ingresar nombre...:";
    cin.getline(alum.nombre,30);
    cout<<"Nota acumulada...:";
    cin>>alum.na;
    cout<<"Nota examen...:";
    cin>>alum.ne;

}

void calcular(alumno &alum)
{
    alum.nf=alum.na+alum.ne;
    if(alum.nf>=60)
        strcpy(alum.obs,"Aprobado");
    else
        strcpy(alum.obs,"Reprobada");
}
void presentar(alumno alum)
{
    cout<<"Nota final.."<<alum.nf <<"\n";
   cout<<"Observacion...."<<alum.obs <<"\n";

}

int main()
{
   ingreso(alum);
   calcular(alum);
   presentar(alum);
}
