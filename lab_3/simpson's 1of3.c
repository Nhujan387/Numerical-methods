#include<stdio.h>
#include<conio.h>

#define f(x) x*x*x+3
int main(){
	float h,x0,x1,x2,fx0,fx1,fx2,v;
	printf("Enter lower and upper limit ");
	scanf("%f %f",&x0,&x2);
	h = (x2-x0)/2;
	x1=x0+h;
	fx0=f(x0);
	fx1=f(x1);
	fx2=f(x2);
	
	v = h*(fx0+4*fx1+fx2)/3;
	printf("the value of intergration : %f",v);
	getch();
	return 0;
}

