#include <iostream>
using namespace std ;

/*LLENAR ARREGLO DE 10 POSCIONES CON VALORES INGRESADOS*/

void llenar(int *parre,int n);
void imprimir(int *parre, int n );
int main ()
{
    int n=10,arre[n];
    llenar(&arre[0],n);
    imprimir(&arre[0],n);    
}
void llenar(int *parre,int n)
{
    int num;
    for(int i=0;i<n;i++)
    {
        cout<<"digite los valores que necesita en el arreglo"<<endl;
        cin>>parre[i*n];
        
    }

}
void imprimir(int *parre, int n )
{
    for (int i=0;i<n;i++)
    {
        cout<<parre[i*n]<<",";
    }
}