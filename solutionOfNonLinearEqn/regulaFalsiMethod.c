#include<stdio.h>
#include<math.h>
#define e 0.000005 //upto 5 decimal places
float f(float x)
{
    return x*x*x + 3*x*x -5;
}

int main()
{
    float a,b,c;
    printf("Enter the intial guesses:");
    scanf("%f%f",&a , &b);
    if(f(a)*f(b)>0)
    {
        printf("Invalid initial guesses");
    }
    else if(f(a)*f(b)==0)
    {
        if(f(a)==0)
        {
            printf("The root is:%f",a);
        }
        if(f(b)==0)
        {
            printf("The root is:%f",b);
        }
    }
    else
    {
        do{
            c=((a*f(b)-b*f(a))/(f(b)-f(a)));
            if(f(c)*f(a)<0)
            {
                b=c;
            }
            else
            {
                a=c;
            }
        }while(fabs(f(c))>e);
        printf("The root is = %f",c);
    }
}