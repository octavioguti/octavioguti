#include <iostream>

using namespace std;

int main()
{
    double menor=0;
    int arr[5][6];
    cout<<"llene el arreglo";
    for(int i=0; i<5;i++){
        for(int j=0; j<6; j++){

            if(j!=5)
            cin>>arr[i][j];
            else
            arr[i][j]=0;
        }
        cout<<" Nueva linea "<<"\n";
    }

    double acum=0;
    for(int i=0;i<5;i++){
        for(int j=0; j<6; j++){

         if(j!=5)
         acum+=arr[i][j];
         else
         arr[i][j]=acum;

        }

        if(i==0)
            menor=acum;
         else if(acum<menor)
            menor=acum;

        acum=0;
    }

    for(int i=0; i<5;i++){
        for(int j=0; j<6;j++){

              cout<<" "<<arr[i][j];

        }
    cout<<"\n";
    }

    for(int i=0; i<5;i++){
        for(int j=0; j<6;j++){

            if(j==5)
              acum+=arr[i][j];

        }

    }
    cout<<"Menor: "<<menor;
    cout<<"El promedio es: "<<(acum-menor)/4<<"";

    return 0;
}
