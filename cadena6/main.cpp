#include <iostream>
#include <string.h>
#include <string>

using namespace std;
/* ingresar 5 nombres usando un arreglo de string usando un void, luego
otro void pedir la cadena buscar y listar todos los nombres que contienen
esa cadena
*/

const int n=4;
string nombre[n];
string cadenabuscar;

void ingreso(string nombre[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Ingresar la cadena["<<i<<"]..:";
        getline(cin,nombre[i],'\n');
    }
}
void presentar(string nombre[n])
{
    for(int i=0;i<n;i++)
    {
        cout<<"Nombre "<<nombre[i]<<"\n";
    }
}
void buscar(string &cadenabuscar)
{
    cout<<" Cadena a buscar...:";
    getline(cin,cadenabuscar);
}
void presentarBuscar(string nombre[4], string cadenabuscar)
{
    int largo;
    int largo2;
    int c=0;
    int bandera=0;
    string coml;
    for (int i=0;i<n;i++)
    {
        largo=nombre[i].size();
        largo2=cadenabuscar.size();
        c=0; bandera=0;
        while(c<largo)
        {
            coml=nombre[i].substr(c,largo2);
            if (coml==cadenabuscar)
            {
                bandera=1;
            }
            c++;
        }
        if (bandera==1)
        {
            cout<<"Cadena encontrada en "<<nombre[i]<<"\n";
        }
    }
}
int main()
{
    ingreso(nombre);
    presentar(nombre);
    buscar(cadenabuscar);
    presentarBuscar(nombre,cadenabuscar);

    return 0;
}
