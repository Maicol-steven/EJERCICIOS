#include <iostream>
#include <stdlib.h>     
#include <time.h>       

/* NUMEROS ALEATORIOS , DETERMINAR CUALES SON PARES */

using namespace std ;

void llenarale (int *pmatriz,int n);
void imprimir( int *pmatriz, int n);


 int main ()
 {
 int n=3, matriz[n][n];
 
 llenarale(&matriz[0][0],n);
 imprimir(&matriz[0][0],n);
 
 }
 void llenarale (int *pmatriz,int n)
 {
     
    srand (time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pmatriz[i*n+j] = rand() % 10 + 1;
            if(pmatriz[i*n+j]%2==0)
            {
                cout<<"el numero par es = ";
                cout<<pmatriz[i*n+j]<<", ";
            }
        }
    }cout<<endl;
 }
  void imprimir( int *pmatriz, int n)
 {
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<pmatriz[i*n + j]<<" ";
        } cout<<endl;
    }
 }
 