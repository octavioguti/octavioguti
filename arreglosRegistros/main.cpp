#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct alumno
{
    char nombre[30];
    int na,ne,nf;
    char obs[15];  //observacion de aprobado o reprobado
};
const int n=4;
alumno alum[n];
alumno maxalumn;

void ingreso(alumno alum[])
{
    for (int i=0;i<=n;i++)
    {   _flushall();
        cout<<"Ingresar el nombre del alumno...:";
        cin.getline(alum[i].nombre,30);
        cout<<"Ingresar la nota de examen..:";
        cin>>alum[i].na;
        cout<<"Ingresar la nota acumulada...:";
        cin>>alum[i].na;


    }
}

void calcular(alumno alum[]) //procedimiento
{
    for (int i=0;i<=n;i++)
    {
        alum[i].nf=alum[i].na + alum[i]ne;
        if (alum[i].nf>=60)
        {
            strcopy(alum[i].obs,"Aprobado");
        }
        else
            {
                strcopy(alum[i].obs,"Reprobado");
            }
    }
}
void presentar1(alumno alum)
{
    cout<<"Alumno "<<alum.nombre<<" nota Final es "<<alum.nf<<"\n";
    cout<<" Esta "<<alum.obs<<"\n";

}
void presentar2 (alumno alum[])
{
    for (int i=0;i<=0;i++)
    {
        presentar1(alum[i]);
    }
}
alumno mayoralum (alumno alum[])
{   alumno temp;
    temp=alum[0];
    for (int i=0;i<=n;i++)
    {
      if (temp.nf<alum[i].nf)
      {
          temp=alum[i];
      }
    }
    return temp;
}
int main()
{
    ingreso(alum);
    calcular(alum);
    presentar2(alum);
    maxalumn=mayoralum(alum);
    cout<<"******** Mayor *******";
    presentar1(maxalumn);

}
