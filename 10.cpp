#include <iostream>
#include <time.h>
#include <stdlib.h>    

using namespace std ;

/*SUMA MATRIZ CON OTRA */

void llenar(int *pA1,int *pA2, int *pA3,int n);
void sumaMatriz(int *pA1,int *pA2, int *pA3,int n);
void impresion ( int *pA1,int *pA2, int *pA3,int n);

int main()
{
    int n=3,A1[n][n],A2[n][n],A3[n][n];

    llenar(&A1[0][0],&A2[0][0],&A3[0][0],n);
    sumaMatriz(&A1[0][0],&A2[0][0],&A3[0][0],n);
    impresion(&A1[0][0],&A2[0][0],&A3[0][0],n);
}
void llenar(int *pA1,int *pA2, int *pA3,int n)
{
     srand (time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pA1[i*n+j] = rand() % 100 + 1;
        }
    }
     srand (time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pA2[i*n+j] = rand() % 10+ 1;
        }
    }
}
void sumaMatriz(int *pA1,int *pA2, int *pA3,int n)
{
 for(int i=0;i<n;i++)
    {
        srand (time(NULL));
        for(int j=0;j<n;j++)
        {
            pA3[i*n+j] = pA1[i*n+j] + pA2[i*n+j];
        }
    }
}
void impresion ( int *pA1,int *pA2, int *pA3,int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<pA1[i*n+j]<<" ";
           
        }cout<<endl;
    }cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<pA2[i*n+j]<<" ";
           
        }cout<<endl;
    }cout<<endl;

    cout<<"esta es la suma de los dos arreglos "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<pA3[i*n+j]<<" ";
           
        }cout<<endl;
    }cout<<endl;
}

