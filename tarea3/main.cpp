#include <iostream>

using namespace std;

int main()
{
    int n=123;
    int rev;
    int par=0;
    int imp=0;

    while (n!=0)
    {
        rev= n%10;
        n=n/10;
        if(n==0){
        par++;
        }else{
        imp++;
        }

    }

    cout<<"impar: "<<imp<<"    par: "<<par;
}
