#include<iostream>
using namespace std;

/*100 POSICIONES CON EL NUMERO 1*/

void arr(int *parreglo,int n);

int main()
{
   int arreglo[0],n;
    arr( &arreglo[0],n);
}
void arr(int *parreglo,int n)
{
    for(int i=0;i<100;i++)
    {
        parreglo[i*n]=1;
    }
    for(int i=0;i<100;i++)
    {
        cout<<parreglo[i*n]<<",";
    }
}