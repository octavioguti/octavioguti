#include <iostream>

using namespace std;
// ingresar dos numeros usando un procedimiento, luego usando otro procedimiento
//sumas los numeros y presentarlo //

void ingreso(int &num1,int&num2)
{
    cout<<"ingresar #1...:";
    cin>>num1;
    cout<<"ingresar #2...:";
    cin>>num2;
}
void sumar (int num1,int num2, int &suma)
{
    suma=num1+num2;
}

int main()
{
    int num1, num2,suma;
    ingreso(num1,num2);
    sumar(num1,num2,suma);
    cout<<"Suma es..:"<<suma<<"\n";
}
