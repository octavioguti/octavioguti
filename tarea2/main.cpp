#include <iostream>

using namespace std;

int main()
{
    int n=123;
    int rev;

    while (n!=0)
    {
    rev= n%10;
    n=n/10;
    cout<<rev;

    }



}
