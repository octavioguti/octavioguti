#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
    int dia=0, mes=0, ano=0;
    int mes1=31, mes2=28, mes3=31, mes4=30,mes5=31,mes6=30,mes7=31,mes8=31,mes9=30,mes10=31,mes11=30,mes12=31;

    cout<<"ingrese el dia...";
    cin>>dia;
    cout<<"ingrese el mes...";
    cin>>mes;
    cout<<"ingrese el año...";
    cin>>ano;

    if (mes>0 && mes<=12 && mes==1 && dia<=mes1 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==2 && dia<=mes2 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==3 && dia<=mes3 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==4 && dia<=mes4 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==5 && dia<=mes5 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==6 && dia<=mes6 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==7 && dia<=mes7 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==8 && dia<=mes8 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==9 && dia<=mes9 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==10 && dia<=mes10 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==11 && dia<=mes11 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }

    if (mes>0 && mes<=12 && mes==12 && dia<=mes12 && ano>0)
    {
       cout<<"la fecha esta correcta";
    }
    else {
          cout<<"Fecha incorrecta";
         }

    system("PAUSE");

}
