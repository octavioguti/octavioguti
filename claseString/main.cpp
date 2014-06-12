#include <iostream>
#include <string>
#include <string.h>

using namespace std;
string cadena;
int main()
{
    cout<<"Ingresar la cadena..:";
    cin>>cadena;
    string subcadena(cadena,3,4);//de la posicion 2 a la posicion
    cout<<"Valor de subcadena"<<subcadena<<"\n";
    string cortar;
    cortar= cadena.substr(0,5);
    cout<<"valor de cortar"<<cortar<<"\n";
    cout<<"Tamaño de la cadena "<<cadena.size()<<"\n";
    /* string insertado;
    insertado=cadena;


    insertado=cadena.insert(1,"juan");
    cout<<"valor de insertado"<<insertado<<"\n";
    string ree;
    ree="BBBBB";
    ree=ree.replace(1,3,"Rommel");
    cout<<"valor ree "<<ree<<"\n";
    return 0; */

}
