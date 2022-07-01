#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,choice;
    float x,y,sumX=0,sumY=0,sumXY=0,sumXSquare=0,sumYSquare=0,a,b;
    printf("Enter the numbers of x and y in the table:");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
      {
        printf("Enter the value of %d)x",i);
        scanf("%f",&x); 
        printf("Enter the value of %d)y",i);
        scanf("%f",&y);
        sumX+=x;
        sumY+=y;
        sumXY+=x*y;
        sumXSquare+=x*x;
    }
    a=(sumY*sumXSquare-sumX*sumXY)/(n*sumXSquare-pow(sumX,2));
    b=(n*sumXY-sumY*sumX)/(n*sumXSquare-pow(sumX,2));
    printf("The best fit is= %f + %fx",a,b);
}