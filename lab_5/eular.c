#include<stdio.h>
#include<conio.h>
#define f(x,y) x+y
int main()
{
	float x0, y0, xn, h,yi,eq;
 	printf("enter x0=");
 	scanf("%f",&x0);
 	printf("enter y0=");
 	scanf("%f",&y0);
 	printf("enter value of x for which y is required=");
 	scanf("%f",&xn);
 	printf("enter h=");
 	scanf("%f",&h);
 	
 	while(x0!=xn){
 		eq=f(x0,y0);
 		yi = y0 + h*eq;
 		x0 = x0+h;
 		
 		y0=yi;
	}
	printf("\nwhen x = %f y = %f",xn,yi); 
 	
}
