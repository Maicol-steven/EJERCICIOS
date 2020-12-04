#include <iostream>
#include <stdlib.h>     
#include <time.h>    

/*HALLAR EL NUMERO MAYOR DE UN ARREGLO*/

using namespace std ;

void llenar (int *pmatriz,int n);
void imprimir (int*pmatriz,int n);
 
 int main()
 {
     int n=3, matriz[n][n];
     llenar(&matriz[0][0],n);
     imprimir(&matriz[0][0],n);

 }
 void llenar (int *pmatriz, int n)
 {
    int  contador =0;
    int mayor=pmatriz[0];
     srand (time(NULL));
     for ( int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
           pmatriz[i*n+j]=rand() % 10 + 1;
         if (pmatriz[i*n+j]>mayor)
         {
           mayor = pmatriz[i*n+j];
           
         }

         }
     }cout<<"el numero mayor es ="<<mayor<<endl;
 }
 void imprimir (int*pmatriz,int n)
 {
   for( int i=0;i<n;i++)
{
    for (int j = 0; j <n; j++)
    {
        cout<<pmatriz[i*n+j]<<" " ;
    }cout<<endl;
}

 }