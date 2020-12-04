#include <iostream>
using namespace std;

/* NUMEROS IMPARES  Y EL TOTAL DE LA SUMA DE ELLOS  */

void  arr( int *parreglo,int n);
void suma (int *parreglo, int n);


int main ()
{
 int n=100;
 int arreglo[n];
 arr(&arreglo[0],n);
 suma(&arreglo[0],n);
 
}
void  arr( int *parreglo,int n)
{
    for(int i=-1;i<99;i=i+2)
    {
        parreglo[i*n]=i+2;
        cout<<parreglo[i*n]<<",";
        
       
        
    }cout<<endl;
    
    
}
void suma (int *parreglo, int n)
{
    int sumadatos =1;
    for(int i=-1;i<99;i=i+2)
    {   
      sumadatos= sumadatos+parreglo[i*n];

    }cout<<endl;
    cout<<"la suma es = "<<sumadatos;

}
