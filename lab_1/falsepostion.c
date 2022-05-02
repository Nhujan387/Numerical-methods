#include<stdio.h>
#include<conio.h>
#include<math.h>
#define   f(x)   (x*x) - (4*cos(x))

int main()
{
	 float xn,fxn,xp,fxp,xm,fxm,e=1,f2,x2;
	 int step = 1;
	 printf("\nEnter two initial guesses:\n");
	 scanf("%f%f", &xn, &xp);
	 fxn = f(xn);
	 fxp = f(xp);
	 
	 printf("iter\txn\t\tfxn\t\txp\t\tfxp\t\txm\t\tfxm\t\terror\n");
	 do
	 {
		  x2 = xn - (xn-xp) * fxn/(fxn-fxp);
		  f2 = f(x2);
		  e = (xp-xn)/xp;
		  printf("%d\t\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",step, xn,fxn, xp, fxp,x2,f2,e);
		
		  if(fxn*f2 < 0)
		  {
			   xp = x2;
			   fxp = f2;
		  }
		  else
		  {
			   xn = x2;
			   fxn = f2;
		  }
		  step = step + 1;
	
	 }while(e>=0.05);

	 printf("\nRoot is: %f", x2);
	 return 0;
}
