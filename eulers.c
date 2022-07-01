#include<stdio.h>
float f(float x, float y)
{
    return (x*x -y);
}
int main()
{
    float x,y,xn ,h,a,b,k;
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
        k = h*f(a, b);
        b = b + k;
        a = a + h;
        printf("The value of x(%d) and y(%d) are:%f,%f\n",i,i,a,b);
    }
    return 1;
}