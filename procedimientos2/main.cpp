#include <iostream>

using namespace std;
/* ingresar 3 numeros usando un procedimiento luego
determinar el numero mayor usando otro procedimiento
presentar el mayor en el main. */

void ingreso(int&num1,int&num2,int&num3)
{
    cout<<"Ingresar #1...:";
    cin>>num1;
    cout<<"ingresar #2...:";
    cin>>num2;
    cout<<"ingrear #3...:";
    cin>>num3;
}
void mayor(int num1,int num2,int num3, int &mayor)
{
    if((num1>num2) and (num1>num3))
        mayor=num1;
    else if (num2>num3);
    mayor =num2;
    else
        mayor=num3;
}
int main()
{
    int num1,num2,num3,mayor;
    ingreso(num1,num2,num3);
    maximo(num1,num2,num3,mayor);
    cout<<"Numero mayor es..:"<<mayor<<"\n";
}
