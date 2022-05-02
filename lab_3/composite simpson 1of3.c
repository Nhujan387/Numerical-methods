#include<stdio.h>
#include<conio.h>
#define f(x) sin(x)+x
int main(){
	int i,k;
	float a,h,x0,xn,fx0,fxn,v,term=0;
	printf("Enter lower and upper limit ");
	scanf("%f %f",&x0,&xn);
	printf("Enter segment ");
	scanf("%d",&k);
	h = (xn-x0)/k;
	fx0=f(x0);
	fxn=f(xn);
	term = f(x0)+f(xn);
	
	for(i=1;i<=k-1;i=i+2){
		a=x0+i*h;
		term=term+4*(f(a));
	}
	for(i=2;i<=k-2;i=i+2){
		a=x0+i*h;
		term=term+2*(f(a));
	}
	v = h*term/3;
	printf("the value of intergration : %f",v);
	getch();
	return 0;
}

