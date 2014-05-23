#include <iostream>

using namespace std;
/*
Ingresar el nombre del empleado las ventas y el turno.
validar el turno que sea 1,2,3
elaborar una funcion para que nos devuelva el % de las ventas
elaborar un procedimiento para calcular el % de comision de la comision
el ihss y total a pagar
presentar los datos usando otro procedimiento
*/
int pedirturno()
{
    int turno;
    do
    {
        cout<<"turno 1,2,3..:";
        cin>>turno;
    }while ((turno<1)and(turno>3));

}
void ingreso(char nombre[],int &ventas,int &turno)
{
    cout<<"ingresar nombre..:";
    cin.getline(nombre,30);
    cout<<"ingresar las ventas...:";
    cin>>ventas;
    do
    {
        cout<<"turno 1,2,3...:";
        cin>>turno;

    }while((turno<1)and (turno>3));

}
double porcomision (int turno)
{
    switch(turno)
    {
    case 1:
        return 0.05;
        break;
    case 2:
        return 0.07;
        break;
    default:
        return 0.06;
        break;
    }
}
void calcular(int turno,int ventas,double &pc,double comision,
              double &ihss,double &totalApagar)
              {
                  pc=porcomision(turno);
                  comision=pc*ventas;
                  if(comision>7000)
                    ihss=245;
                  else
                    ihss=0.035*comision;
                  totalApagar=comision-ihss;
              }
              void presentar(double pc,double comision,double ihss, double totalApagar)
              {
                  cout<<"% Comision....:"<<pc<<"\n";
                  cout<<"Comision ganada.."<<comision<<"\n";
                  cout<<"Ihss.."<<ihss<<"\n";
                  cout<<"Total a pagar..:"<<totalApagar<<"\n";
              }
              char pedirrespuesta()
              {
                  char resp;
                  do
                  { cout<<"Desea continuar...:";
                  cin.get(resp);

                  }while((resp!='N')and (resp!='S'));
                  _flushall();
                  return resp;
              }



int main()
{
    char nombre[30];
    int turno,ventas;
    double pc,comision,ihss,totalApagar;
    ingreso(nombre,ventas,turno);
    calcular(turno,ventas,pc,comision,ihss,totalApagar);
    presentar(pc,comision,ihss,totalApagar);
    pedirrespuesta();
}while (resp!='N');
