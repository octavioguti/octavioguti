#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int validarTurno()
{
    int turno;
    do
    {
        cout<<"Ingresar turno 1,2,3..:";
        cin>>turno;

    }while(turno<1)or(turno>3)
}
 double pxhora(int turno)
 {  switch(turno)
 {
 case 1:
    return 200;
    break;
 case 2:
    return 150;
    break;
 default:
    return 180;
    break;
 }

 }
 double seguro(double sueldo)
 {
     if (sueldo>7000)
        return 245;
     else
        return 0.035*sueldo;
 }
     void ingresar(char nombre[],int &turno,int &horas)
     {
         cout<<"Ingresar nombre...:";
         cin.getline(nombre,30);
         cout<<"Horas trabajadas...:";
         cin>>horas;
         turno=validarTurno();
     }
     void calcular(int turno,int horas,double &pxh,double &pb,double &ihss,double &tp)
     {
         pxh=pxhora(turno);
         pb=horas*pxh;
         ihss=seguro(pb);
         tp=pb-ihss;
     }
     void presentar(int turno,int horas,double pxh,double,pb,double ihss,double tp)
     {
         cout<<"pago por horas"<<pxh<<"\n";
         cout<<"Pago bruto"<<pb<<"\n";
         cout<<"ihss"<<ihss<<"\n";
         cout<<"total a pagar"<<tp<<"\n";

     }
     char pedirsino()
     { _flushall();
     char resp;
     {
         cout<<"DEsea continuar S/N...:";
         cin.get(resp);
         flushall();
     }while ((resp!='S')and(resp!='N'));
     cout<<"\n\n";
     return resp;

     }


int main()
{char nombre[30]; char resp;
int turno,horas;
double pb,ihss,tp,pxh;
double maxisueldo;
maxisueldo=0;
do
{
    turno();
    ingresar(nombre,turno,horas);
    calcular(turno,horas,pxh,pb,ihss,tp);
    presentar(pxh,pb,ihss,tp);
    if (tp>maxisueldo)
    {
        maxisueldo=tp;
        strcpy(maxnombre,nombre);

    }
    pedirsino(resp);
    _flushall();

}while((resp!='N'));
cout<<"Mayor sueldo......:"<<maxisueldo<<"\n";

}
