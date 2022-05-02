#include<stdio.h>
#include<conio.h>

#define f(x)3*x*x+2*x-5
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
	for(i=1;i<=k-1;i++){
		a=x0+i*h;
		term=term+2*(f(a));
	}
	v = h*term/2;
	printf("the value of intergration : %f",v);
	getch();
	return 0;
}

