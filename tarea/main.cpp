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

    if (mes>0 && mes<=12 && mes==1,mes==2,mes==3,mes==4,mes==5,mes==6,mes==7,mes==8,mes==9,mes==10,mes==11,mes==12
         && dia<=mes1,dia<=mes2,dia<=mes3,dia<=mes4,dia<=mes5,dia<=mes6,dia<=mes7,dia<=mes8,dia<=mes9,dia<=mes10,dia<=mes11,dia<=mes12
          && ano>0)
    {
       cout<<"la fecha esta correcta";
    }
    else {
          cout<<"Fecha incorrecta";
         }

}
