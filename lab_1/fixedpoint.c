#include<stdio.h>
#include<math.h>
#define    f(x)    x-exp(-x)
#define   g(x)   exp(-x)

void main()
{
	 float x, gx, testerror ,e=1;
	 int i =1;
	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x);
	 printf("\niter\t\tx\t\tgx\t\terror\n");
	 while(e>=0.05)
	 {
		  gx = g(x);
		  
		  testerror= (gx-x)/gx;
		  
		  e = fabs(testerror);
		
		  printf("%d\t%f\t%f\t%f\n",i,x,gx,e);
		  x = gx;
		  
		   i++;
		  
	 }

	 printf("\nRoot is: %f", x);
}
