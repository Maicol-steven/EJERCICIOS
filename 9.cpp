# include <iostream>

using namespace std;
/* MATRIZ IDENTIDAD*/

void llenar(float *piden, int n);
void imprimir(float *piden, int n);

int main()
{
    int n =3;
    float iden[n][n];

   llenar(&iden[0][0],n);
   imprimir(&iden[0][0],n);
}
void llenar(float *piden, int n)
{
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
            {
                piden[i*n+j]=1;
            }
            else
            {
                piden[i*n+j]=0;
            }
            
        }
    }

}
void imprimir(float *piden, int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<piden[i*n + j]<<" ";
        }cout<<endl;
    }cout<<endl;
}