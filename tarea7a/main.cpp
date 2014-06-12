#include <iostream>

using namespace std;
int arr[10];

void ingresar()
{
    cout<<"Ingrese 10 numeros..."<<"\n";

    for(int i=0; i<10; i++)
    {

        cin>>arr[i];

    }

}
void ordenar()
{
    int temp;
    for(int i=0; i<10; i++){
        for(int j=0; j<10-1; j++){
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void presentar()
{

    cout<<"Los numeros son: ";
        for(int i=0; i<10; i++)
    {

        cout<<arr[i]<<" ";

    }

    cout<<"Los numeros ordenados son...:"<<"\n";

    ordenar();
        for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";

    }

}

int main()
{

   ingresar();
   presentar();
}
