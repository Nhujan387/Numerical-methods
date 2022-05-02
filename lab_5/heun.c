#include<stdio.h>
#define f(x,y) x+y
int main()
{
	float x0, y0, xn, h,yi,m1,m2;
 	printf("enter x0=");
 	scanf("%f",&x0);
 	printf("enter y0=");
 	scanf("%f",&y0);
 	printf("enter value of x for which y is required=");
 	scanf("%f",&xn);
 	printf("enter h=");
 	scanf("%f",&h);
 	
 	while(x0!=xn){
 		m1=f(x0,y0);
 		m2=f(x0+h,y0+h*m1);
 		yi = y0 + (h/2)*(m1+m2);
 		x0 = x0+h;
 		y0=yi;
	}
	printf("\nwhen x = %f y = %f",xn,yi); 
}

