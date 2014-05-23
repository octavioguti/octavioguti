#include <iostream>

using namespace std;



double seguro(double &pb)
{
    if (pb>7000)
        return 245;
    else
        return 0.035*pb;
}

void ingreso(char nombre [], int &horas, char &turno)
{
    cout<<"Ingresar nombre...:";
    cin.getline(nombre,30);
    cout<<"Horas trabajadas...:";
    cin>>horas;
    int continuar=0;
    do
    {
        cout<<"Ingresar el turno: ";
        cin>>turno;

        if(turno!='A'or turno!='B'or turno!='C'or turno!='a' or turno!='b' or turno!='c')
          continuar=0;
        else
            continuar=1;

    }while (continuar==1);

}

double calcPagoHora(int &hrs, char &turno){

    if(turno=='A' or turno=='a')
        return hrs*140;
    else if(turno=='B'or turno=='b')
        return hrs*160;
    else
        return hrs*180;
}

double sueldoTot( double &sueldo, double &ihss){
    return sueldo-ihss;
}

void imprimir(char nombre[],char turno, int hrs, double sueldo, double sueldot, double ihss){

    cout<<"Datos\n"<<"Nombre: "<<nombre<<"\nTurno: "<<turno<<"\nHoras: "<<hrs<<"\nSueldo: "<<sueldo<<"\nIHSS: "<<ihss<<"\nSueldo Total:"<<sueldot;

}



int main()

{
    char turno;
    char nombre[30];
    int horas;
    ingreso(nombre,horas,turno);

    double sueldo=calcPagoHora(horas,turno);
    double ihss=seguro(sueldo);
    double sueldoT=sueldoTot(sueldo,ihss);

    imprimir(nombre,turno,horas,sueldo,sueldoT,ihss);
}
