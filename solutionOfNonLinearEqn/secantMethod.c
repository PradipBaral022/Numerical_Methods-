#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define e 0.00005
float f(float x)
{
    return pow(x,3) + 3*x*x -5;
}

int main()
{
    int count=0;
    float a,b,c;
    printf("Enter the intial guesses or limits:");
    scanf("%f%f",&a,&b);
    if(f(a)*f(b)==0)
    {
        if(f(a)==0)
        {
            printf("The root is=%f",a);
        }
        if(f(b)==0)
        {
            printf("The root is=%f",b);
        }
    }
    else
    {
        do
        {
            c=(a*f(b)-b*f(a))/(f(b)-f(a));
             if(fabs(f(b)-f(a))<0.00000000005)
            {
                printf("Error");
                exit(1);
            }
            a=b;
            b=c;
            ++count;
            if(count > 500)
            {
                printf("Error");
                exit(1);
            }
        } while (fabs(f(c))>e);
        printf("'The root is=%f",c);       
    }
    return 1;
}