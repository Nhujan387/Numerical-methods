#include<stdio.h>
#include<math.h>

float bisection(float x);

int main(){
	float xn,fxn,xp,fxp,xm,fxm,error=1;
	int i=1;
	printf("\nEnter two initial guesses:\n");
	scanf("%f%f", &xn, &xp);
	printf("iter\txn\t\tfxn\t\txp\t\tfxp\t\txm\t\tfxm\t\terror\n");
	while(error >= 0.05){
		
		printf("%d \t",i++);
		
		printf("%.5f \t",xn);

		fxn = bisection(xn);
		printf("%.5f \t",fxn);

		printf("%.5f \t",xp);
		
		fxp = bisection(xp);
		printf("%.5f \t",fxp);

		xm= (xn+xp)/2;
		fxm = bisection(xm);
		error = (xp-xn)/xp;

		printf("%.5f \t",xm);
		printf("%.5f \t",fxm);
		printf("%.5f \t",error);
		printf("\n");
		if(fxm > 0){
			xp = xm;
		}else{
			xn = xm;
		}
	}
}

float bisection(float x){
	float result;
	result = (x*x) - (4*cos(x));
	return result;
}

