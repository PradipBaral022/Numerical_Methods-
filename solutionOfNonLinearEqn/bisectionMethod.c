#include<stdio.h>
#include<math.h>
#define e 0.0005
float f(float x)
{
	return x*(log(x)/2.303)-1.2;
}
int main()
{
	 float a, b ,c,x;
	 printf("\nEnter two initial guesses:\n");
	 scanf("%f %f", &a, &b);
	 if(f(a)*f(b)>0)
	 {
	         printf("Invalid initial guesses:");
	 }
	 else if(f(a)*f(b)==0)
	 {
	         if(f(a)==0) 
			 {
				 printf("The root is %f",a);
			 }
	         if(f(b)==0) 
			 {
				 printf("The root is %f",b);
			 }
	}
	 else 
	 {
	     do{
			 c=(a+b)/2;
	         if(f(a)*f(c)<0)
			 {
				 b=c;
			 }
	         else 
			 {
				 a=c;
			 }
	     }while (fabs(f(c))>e || fabs(b-a)>e);
	     printf("The root is=%f",c);

	 }
}