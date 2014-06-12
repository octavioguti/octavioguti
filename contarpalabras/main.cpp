#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//comparacion de cadenas

using namespace std;
const int t=4;
char nombre[t][30];
int num[t];

void ingresoCadenas(char nombre[t][30])
{  for(int i=0;i<=t;i++)
   { cout<<"Ingresar el nombre...:";
     cin.getline(nombre[i],30);
   }

}
void presentar(char nombre[t][30],int num[])
{
    for(int i=0;i<=t;i++)
    {
        cout<<nombre[i]<<" Tiene "<<num[i]<<" Palabras "<<"\n";
    }
}

void contar(char nombre[])
{
    int c=0;
        for (int k=0;k<strlen(nombre);k++)
        {
            switch(nombre[k])
            {
            case '':
                c++;
                break;
                default;
                break;
            }
        }
        return c++;
    }

void contarPalabras(char nombre[t][30],int num[])
{    int conta=0;
    for(int i=0;i<=t;i++)
    { conta=contar(nombre[i]);
    cout<<nombre[i]<<"tiene "<<conta<<"Letras"<<"\n";

    }
}

int main()
{
    ingresoCadenas(nombre);
    comparar2(nombre);
    cout<<"\n"<<"Otro tipo de comparacion"<<"\n";
    Comparar(nombre);
    contarPalabras(nombre)
    return 0;

}
