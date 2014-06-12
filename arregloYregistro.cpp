#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

/* elaborar un procedimiento para ingresar el nombre
y las ventas de todos los empleados.
calcular la comision, y el seguro social usando una funcion  para cada uno de ellos.
la comision se calcula asi;
de
1-20,000 3%
20,001-50,000 4%
50,001- 5%
hacer los calculos de todo el arreglo de registro usando un procedimiento.
presentar los datps en un procedimiento.
*/



struct emple
{
    char nombre[30];
    double ventas [3];
    double sumaventas,comis,ihss,tp;
};

const int n=4;
emple emplex[n];
// elaborar un procedimiento de ingreso

void ingresar (emple emplex[])
{

    for (int i=0;i<=n; i++)
    {   _flushall();
     //ingresar los datos en un arreglo
     cout<<"Nombre del empleado:";
     cin.getline(emplex[i].nombre,30);
        //para leer la ventas ocupamos cuatro ciclos
        for(int k=0; k<=3; k++)
        {
            // ingresar las ventas
            cout<<"Ingresar las ventas.."<<k<<"...:";
            cin>> emplex[i].ventas[k];
            //implex es la variable

        }
    }
}

double seguro(double pb)
{

    if(pb>7000)
    {
        return 245;

    }
    else
        {
            return pb * 0.035;

        }
}

double comision (double sumaventas)
{

    if(sumaventas<=20000)
    {
        return 0.03;
    }
    else if (sumaventas<=50000)
    {
        return 0.04;
    }
    else if (sumaventas>50000)
    {
        return 0.05;
    }
    else {return 0;}
}


double suma (double ventas[])
{
    double xsum=0;
    for(int i=0;i<=n;i++)
    {
        xsum+= ventas[i];
    }
    return xsum;
}

//calcular el como usar este programa
//aqui entra en arreglo completo


void calcular (emple emplex[])
{
    for (int i=0;i<=n;i++)
    {
        emplex[i].sumaventas = suma(emplex[i].ventas);
        emplex[i].comis = emplex[i].sumaventas * comision(emplex[i].sumaventas);
        emplex[i].ihss = seguro(emplex[i].comis);
        emplex[i].tp = emplex[i].comis-emplex[i].ihss;
    }
}
//ahora hacer el procedimiento de presentar

void presentar (emple emplex[])
{
    //recorrer variable por variable para poder presentar los valores
    for (int i=0;i<=n;i++)
    {
     cout<<"Empleado.."<<emplex[i].nombre<<"\n";
     cout<<"Total ventas.."<<emplex[i].sumaventas<<"\n";
     cout<<"Comision....."<<emplex[i].comis<<"\n";
     cout<<"Ihss......"<<emplex[i].ihss<<"\n";
     cout<<"Total a pagar.."<<emplex[i].tp<<"\n";
     cout<<"\n";
     cout<<"\n";
     cout<<"\n";
     cout<<"\n";
     cout<<"\n";





    }



}

int main()
{
  ingresar(emplex);
  calcular(emplex);
  presentar(emplex);
}
