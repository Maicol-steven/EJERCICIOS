#include <iostream>
using namespace std;

/* NUMEROS PARES  HASTA EL 100 */

void  arr( int *parreglo,int n);
int main ()
{
 int n=100;
 int arreglo[n];
 arr(&arreglo[0],n);

}
void  arr( int *parreglo,int n)
{
    for(int i=0;i<99;i=i+2)
    {
        parreglo[i*n]=i+2;
        cout<<parreglo[i*n]<<",";
        
    }
    
}