#include <iostream>
using namespace std;

/* MULTIPLICACION DE UN ARREGLO POR UN ESCALAR */

void impresionA( float *parregloA, int n);
void resultadox(float *presultado,float *parregloA,float *parregloB,int n);
int main ()
{
 int n=50;
 float arregloA[n],arregloB[1]={2}, resultado[n];

 impresionA(&arregloA[0],n);
 resultadox(&arregloA[0],&arregloB[0],&resultado[0],n);


}
void impresionA( float *parregloA, int n)
{
    
for(int i=0; i<=49;i++)
{
    parregloA[i*n]=i+1;
    cout<<parregloA[i*n]<<",";
}
cout<<endl<<" EL ESCALAR ES: 2"<<endl;
cout<<"el resultado de a x 2 = "<<endl;
}
void resultadox(float *parregloA,float *parregloB,float *presultado,int n)
{
    for(int i=0; i<=49; i++)
{
    presultado[i] =parregloA[i*n]*parregloB[0];
    cout<<presultado[i]<<",";
}
}