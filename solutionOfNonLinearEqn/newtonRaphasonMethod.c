#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define e 0.00005
float f(float x1)
{
    return x1*x1*x1 - 4*x1 - 9;
}
float ff(float x2)
{
    return 3*x2*x2 - 4;
}
int main()
{
    int count=0;
    float a,b,error;
    printf("Enter the initial guess:");
    scanf("%f",&a);
    if(f(a)==0)
    {
        printf("The root is=%f",a);
    }
    else
    {
        do
        {
            b=a-(f(a)/ff(a));
            if(ff(a)<0.00000001)
            {
                printf("Invalid curve");
                exit(1);
            }
            error=fabs(b-a);
            a=b;
            ++count;
            if(count > 500)
            {
                printf("Error");
                exit(1);
            }
        } while (fabs(b-a)>e);
        printf("The root is=%f",b); 
        return 1;
    }
}