#include <iostream>
#include <ctime>
#include <cstdio>
#include <stdlib.h>

using namespace std;
/*
*/

const int lin=3;
const int col=3;
char num[lin][col];

void rellenar(char num[lin][col])
{
    for (int l=0; l<lin; l++)
    {
        for (int c=0; c<col; c++)
        {
            num[l][c]='*';
        }
    }
}

void presentar (char num[lin][col])
{
    for (int l=0; l<lin; l++)
    {
        for (int c=0; c<col; c++)
        {
            cout<<num[l][c]<<" ";

        }
        cout<<"\n";
    }
}

void laptop(char num[lin][col],char marca)
{
    int linea,columna;
    int conti=0;

    cout<<"Ingresar Marca"<<marca<<"\n";
    do
    {

        int num3;
        srand(time(0));
        num3 = rand()% (3);

        linea=num3;


        int num2;
        srand(time(0));
        num2 =rand()% (3);
        columna=num2;


        if(num[linea][columna]=='*')
        {
            num[linea][columna]=marca;
            conti=1;
        }
        else
        {
            conti=0;
        }
    }
    while(conti==0);
}

void pedir(char num[lin][col],char marca)
{
    int linea,columna;
    int conti=0;
    cout<<"Ingresar Marca"<<marca<<"\n";
    do
    {
        do
        {
            cout<<" Linea ";
            cin>>linea;
        }
        while (!(linea>=1 and linea<=3));
        linea-=1;
        do
        {
            cout<<" Columna ";
            cin>>columna;
        }
        while (!(columna>=1 and columna<=3));
        columna-=1;

        if(num[linea][columna]=='*')
        {
            num[linea][columna]=marca;
            conti=1;
        }
        else
        {
            cout<<"Casilla Repetida...\n";
            conti=0;
        }
    }
    while(conti==0);
}

int DiagonalX(){

    if(num[0][0]=='X' and num[1][1]=='X' and num[2][2]=='X')
        return 1;
    if(num[0][2]=='X' and num[1][1]=='X' and num[2][0]=='X')
        return 1;

return 0;
}

int Diagonal0(){

    if(num[0][0]=='0' and num[1][1]=='0' and num[2][2]=='0')
        return 1;
    if(num[0][2]=='0' and num[1][1]=='0' and num[2][0]=='0')
        return 1;

return 0;
}

int RectaX(){
    if(num[0][0]=='X' and num[0][1]=='X' and num[0][2]=='X')
        return 1;
    if(num[1][0]=='X' and num[1][1]=='X' and num[1][2]=='X')
        return 1;
    if(num[2][0]=='X' and num[2][1]=='X' and num[2][2]=='X')
        return 1;

 return 0;
}

int Recta0(){
    if(num[0][0]=='0' and num[0][1]=='0' and num[0][2]=='0')
        return 1;
    if(num[1][0]=='0' and num[1][1]=='0' and num[1][2]=='0')
        return 1;
    if(num[2][0]=='0' and num[2][1]=='0' and num[2][2]=='0')
        return 1;

 return 0;
}

int VerticalX(){
    if(num[0][0]=='X' and num[1][0]=='X' and num[2][0]=='X')
        return 1;
    if(num[0][1]=='X' and num[1][1]=='X' and num[2][1]=='X')
        return 1;
    if(num[0][2]=='X' and num[1][2]=='X' and num[2][2]=='X')
        return 1;

 return 0;

}

int Vertical0(){
    if(num[0][0]=='0' and num[1][0]=='0' and num[2][0]=='0')
        return 1;
    if(num[0][1]=='0' and num[1][1]=='0' and num[2][1]=='0')
        return 1;
    if(num[0][2]=='0' and num[1][2]=='0' and num[2][2]=='0')
        return 1;

 return 0;

}

int main()
{
    rellenar(num);
    presentar(num);
    for(int i=0; i<9; i++)
    {
        pedir(num,'X');
        presentar(num);
        if(DiagonalX()==1 or RectaX()==1 or VerticalX()==1){
            cout<<"Ha Ganado'X' ";
            break;
        }
        laptop(num,'0');
        presentar(num);
         if(Diagonal0()==1 or Recta0()==1 or Vertical0()==1){
            cout<<"Ha Ganado '0' ";
            break;
        }
    }
    ;
}
