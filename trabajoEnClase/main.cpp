#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct alumno
{
    char nombre[30];
    double parcial[2];
    double promedio;
    char obs[15];
};
const int n=4;
alumno alum[n];

void ingreso (alumno alum[])
{
    for (int i=0;i<=n;i++)
    {
        _flushall();
        cout<<"Nombre del alumno...:";
        cin.getline(alum[i].nombre,30);

        for (int k=0; k<=2; k++)
        {
            cout<<"Ingresar la nota parcial.."<<k<<"...";
            cin>> alum[i].parcial[k];
        }
    }
}

double promedio(double parcial[])
{
    double suma=0;
    for (int i=0; i<3;i++)
        suma += parcial[i];
    return suma/3;
}


void calcular(alumno alum[])
{
    for (int i=0; i<=n; i++)
    {
        alum[i].promedio=alum[i].parcial / 3;
        if (alum[i].promedio>=60)
        {
            strcopy(alum[i].obs,"Aprobado");
        }
        else
        {
            strcopy(alum[i].obs,"Reprobado");
        }
    }
}

void presentar(alumno alum)
{
    cout<<" Alumno "<<alum.nombre<<" Nota final es "<<alum.promedio<<"\n";
    cout<<" Esta " <<alum.obs<<"\n";

}

void presentartodos(alumno alum[])
{
    for (int i=0; i<=0; i++)
    {
        presentar(alum[i]);
    }
}

int main()
{
    ingreso (alum);
    calcular (alum);
    presentar (alum);
}
