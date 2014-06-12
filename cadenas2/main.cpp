#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

//ingresar una cadena de 30 letras, luego usando
//un procedimiento cambiar las vocales de cadena
//por una x

void ingreso(char cadena[])
{
    cout<<"Ingresar cadena de 30 letras max...";
    cin.getline(cadena,30); //ingresa cadena
}
void cambiar(char cadena[])
{
    for (int i=0;i<strlen(cadena);i++)
    {
        switch (cadena[i])
        {
        case'a':
        case'A':
        case'e':
        case'E':
        case'i':
        case'I':
        case'o':
        case'O':
        case'u':
        case'U':
            cadena[i]='X';
            break;
        default:
            break;
        }

    }
}
int main()
{


  char cadena[30];
  ingreso(cadena);
  cambiar(cadena);
  cout<<"Cadena cambiada...:"<<cadena<<"\n";
}

