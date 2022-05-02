#include<stdio.h>
#include<math.h>
#define    f(x)    (x*x) - (4*cos(x))
#define   g(x)   (2*x) + (4*sin(x))

void main()
{
	 float x0, x1, f0, f1, g0, e=1;
	 int i =1;
	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x0);
	 printf("\niter\t\tx0\t\tf(x0)\t\tg(x0)\t\tx1\t\terror\n");
	 while(e>=0.05)
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		
		  x1 = x0 - f0/g0;
		  e= (x1-x0)/x1;
		
		  printf("%d\t\t%f\t%f\t%f\t%f\t%f\n",i,x0,f0,g0,x1,e);
		  x0 = x1;
		  
		   i++;
		  
	 }

	 printf("\nRoot is: %f", x1);
	 f1= f(x1);
	 printf("%f",f1);
	 getch();
}
