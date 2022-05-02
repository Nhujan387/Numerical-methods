#include<stdio.h>
#define f(x,y) x+y
int main()
{
	float x0, y0, xn, h,yi,m1,m2,m3,m4;
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
 		m2=f(x0+(h/2),y0+m1*(h/2));
 		m3=f(x0+(h/2),y0+m2*(h/2));
 		m4=f(x0+h,y0+m3*h);
 		yi = y0 + (m1+2*m2+2*m3+m4)*(h/6);
 		x0 = x0+h;
 		y0=yi;
	}
	printf("\nwhen x = %f y = %f",xn,yi); 
}

