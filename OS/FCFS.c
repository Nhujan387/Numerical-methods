#include<stdio.h>
int main(){
	int bt[20], wt[20], tat[20], i, n;
	float wtavg, tatavg ;
	printf("\n Enter the number of processes -- ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter Brust time for process %d -- ",i);
		scanf("%d",&bt[i]);
	}
	wt[0] = wtavg = 0;
	tat[0] = tatavg = bt[0];
	for(i=1;i<n;i++)
	{
		wt[i] = wt[i-1] + bt[i-1];
		tat[i] = tat[i-1] + bt[i];
		wtavg = wtavg + wt[i];
		tatavg = tatavg + tat[i];
	}
	printf("\t Process \t brust time \t witing time \ t turnaround time \n ");
	for(i=0;i<n;i++)
	{
		printf("\n\t %d \t\t %d \t\t %d \t\t %d", i, bt[i], wt[i], tat[i]);
	}
	printf("\n average waiting time -- %f", wtavg/n);
	printf("\n average turnaround time -- %f ", tatavg/n);
	return 0;
}
