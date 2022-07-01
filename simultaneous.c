#include<stdio.h>
float f1(float x, float y, float z)
{
    return (3*x +y -z );
}
float f2(float x, float y,float z)
{
    return (2*x-y+z);
}
int main()
{
    float x,y,xn,z ,h,a,b,c,k1,k2,k3,k4,k,l,l1,l2,l3,l4;
    int n;
    printf("Enter the initial conditions:\n");
    scanf("%f""%f""%f",&x,&y,&z);
    printf("Enter the final value of x:");
    scanf("%f",&xn);
    printf("Enter the number of intervals:");
    scanf("%d",&n);
    h=(xn-x)/n;
    a=x;
    b=y;
    c=z;
    for(int i=1;i<=n;i++)
    {
        k1 = h*f1(a, b,c);
        l1= h*f2(a,b,c);
        k2 = h*f1(a+h/2, b+k1/2,c+l1/2);
        l2 = h*f2(a+h/2, b+k1/2,c+l1/2);
        k3 = h*f1(a+h/2, b+k2/2 ,c+l2/2);
        l3 = h*f2(a+h/2, b+k2/2 ,c+l2/2);
        k4 = h*f1(a+h, b+k3 , c+l3);
        l4 = h*f2(a+h, b+k3 , c+l3);
        k = (k1+2*k2+2*k3+k4)/6;
        l=(l1+2*l2+2*l3+l4)/6;
        b = b + k;
        a = a + h;
        c = c + l;
        printf("The value of x(%d) and y(%d) and c(%d) are:%f,%f,%f\n",i,i,i,a,b,c);
    }
    return 1;
}