#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,k;
    printf("Enter the total number of unknowns:");
    scanf("%d",&n);
    float a[n][n+1],ratio;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            printf("Enter the a[%d][%d]th element of the matrix:",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i][i]<0.00000005)
        {
            printf("Error/Diagonal element can't be zero\n");
            exit(1);
        }
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
               ratio=(a[j][i]/a[i][i]);
               for(k=0;k<n+1;k++)
               {
                a[j][k]=a[j][k]-(ratio*a[i][k]);
               }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("The value of %dth unknown variable is:%f\n",i,a[i][n]/a[i][i]);
    }
    return 0;
}