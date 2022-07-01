#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,m,j,i,k;
    float x[100],y[100],A[10][10],ratio,C[10];
    printf("Enter the number of data pairs n:");
    scanf("%d",&n);
    printf("Enter the degree of polynomials:");
    scanf("%d",&m);
    printf("Enter the values of x serially:\n");
    for(int i=0;i<n-1;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("Enter the value of y serially:\n");
    for(int i=0;i<n-1;i++)
    {
        scanf("%f",&y[i]);
    }
    for(int i=0;i<m;m++)
    {
        A[i][j]=0;
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<n;k++)
            {
               A[i][j]+=pow(x[k],(i+j));
            }
            A[i][m+1]=0;
            for(int k=0;k<n;k++)
            {
               A[i][m+1]+=pow(x[k],i)*y[k];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(A[i][i]<0.00000005)
        {
            printf("Error/Diagonal element can't be zero\n");
            return 1;
        }
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
               ratio=(A[j][i]/A[i][i]);
               for(k=0;k<n+1;k++)
               {
                A[j][k]=A[j][k]-(ratio*A[i][k]);
               }
            }
        }
    }
    printf("The coefficient is:\n");
    for(i=0;i<m;i++)
    {
        C[i]=A[i][m+1]/A[i][i];
    }
    return 1;
}