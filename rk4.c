#include<stdio.h>
float f(float x, float y)
{
    return (x*x -y);
}
int main()
{
    float x,y,xn ,h,a,b,k1,k2,k3,k4,k;
    int n;
    printf("Enter the initial conditions:\n");
    scanf("%f""%f",&x,&y);
    printf("Enter the final value of x:");
    scanf("%f",&xn);
    printf("Enter the number of intervals:");
    scanf("%d",&n);
    h=(xn-x)/n;
    a=x;
    b=y;
    for(int i=1;i<=n;i++)
    {
        k1 = h*f(a, b);
        k2 = h*f(a+h/2, b+k1/2);
        k3 = h*f(a+h/2, b+k2/2);
        k4 = h*f(a+h, b+k3);
        k = (k1+2*k2+2*k3+k4)/6;
        b = b + k;
        a = a + h;
        printf("The value of x(%d) and y(%d) are:%f,%f\n",i,i,a,b);
    }
    return 1;
}