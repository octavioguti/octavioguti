#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
elaborar una funcion donde se valide una zona que sea 1,2,3
   elaborar una funcion para determinar el pago por hora usando la zona:
    turno 1 = 200, turno 2= 150, turno 3 = 180
    elaborar una funcion para el ihss. elaborar un procedimiento para ingresar el nombre, el turno y las horas.
    elaborar un procedimiento para calcular el pago por hora, pago bruto, ihss y total a pagar, luego presentar
    los datos usando un procedimiento donde se presenten todos los datos. en el programa principal ingresar un empleado,
    calcular y presentar los datos luego preguntar, si desea continuar, validar la respuesta usando una funcion
    al final presentar el empleado que tiene mejor sueldo.
    el salario es mayor a 7000
*/
void Ingresar(char nombre[], int &horas, int &turno)
{
    cout<<"Ingrese el nombre...:";
    cin>>nombre;
    cout<<"Horas trabajadas...:";
    cin>>horas;
    do{
        cout<<"Ingrese un turno 1,2,3...:";
        cin>>turno;

    }while(turno<1 or turno>3);
}

double pagoxhora(int turno,int hrs)
{

    if(turno==1)
        return hrs*200;
    else if(turno==2)
        return hrs*150;
    else return hrs*180;

}

double calcularIHSS(double sueldo)
{

    if(sueldo>7000)
        return 300;
    else
        return sueldo*.3;
}

double PagoTot(double sueldo,double ihss)
{
    return sueldo-ihss;
}

void presentar(char nombre[],int turno, int  hrs, double sueldob, double sueldot, double ihss)
{

    cout<<"Nombre....: "<<nombre<<"\n";
    cout<<"Turno..:"<<turno<<"\n";
    cout<<"Sueldo bruto..."<<sueldob<<"\n";
    cout<<"IHSS..."<<ihss<<"\n";
    cout<<"Suelto total..."<<sueldot<<"\n";
}

int main()
{
    char continuar;
    do{
    int turno;
    int hrs;
    char nombre[30];
    Ingresar(nombre,hrs, turno);
    double sueldo=pagoxhora(turno,hrs);
    double ihss=calcularIHSS(sueldo);
    double sueldot= PagoTot(sueldo, ihss);
    presentar(nombre,turno,hrs,sueldo,sueldot,ihss);
    cout<<"desea continuar? S =si; N= no....: ";
    cin>>continuar;
    }while(continuar=='S');

    return 0;
}

