#include<stdio.h>
#include<stdlib.h>
typedef struct process
{
 int id,at,bt,st,ft,pr;
 float wt,tat;
}process;

process p[10],p1[10],temp;

int accept();
void ganttps(int n);
void turnwait(int n);
void display(int n);

int main()
{
 	 int i,n,ch,j,x;
	 p[0].tat=0;
 	 p[0].wt=0;
         n=accept();
	 ganttps(n);
	 turnwait(n);
	 display(n);
	 return 0;
}
int accept()
{
	 int i,n;
	 printf("\nEnter the no. of process: ");
	 scanf("%d",&n);
	 if(n==0)
	 {
		  printf("\nInvalid no. of process");
		  exit(0);
	 }
	 for(i=1;i<=n;i++)
	 {
		  printf("\nEnter the arrival time for process P%d: ",i);
		  scanf("%d",&p[i].at);
		  p[i].id=i;
	 }
	 for(i=1;i<=n;i++)
	 {
		  printf("\nEnter the burst time for process P%d: ",i);
		  scanf("%d",&p[i].bt);
	 }
	 for(i=1;i<=n;i++)
	{
		printf("\nEnter the priority for P%d: ",i);
		scanf("%d",&p[i].pr);
	}
	return n;
}

void ganttps(int n)
{
	 int i,j,nextval,limit;
	 printf("\n==============================================================\n");
	 printf("\nProcess\tAT\tBT\tPRIORITY");
	 for(i=1;i<=n;i++)
	  	printf("\nP%d\t%d\t%d\t%d",p[i].id,p[i].at,p[i].bt,p[i].pr);
	 printf("\n==============================================================\n");
	 for(i=1;i<=n;i++)
	  	for(j=i;j<=n;j++)
	   		if((p[i].pr > p[j].pr))
	   		{
			    temp=p[j];
			    p[j]=p[i];
			    p[i]=temp;
	   		}
	  for(i=1;i<=n;i++)
	   	for(j=i;j<=n;j++)
	   	{
		    if((p[i].pr == p[j].pr))
		    {
			     temp=p[j];
			     p[j]=p[i];
			     p[i]=temp;
		    }
	   	}
	 for(i=1;i<=n;i++)
	  	p1[i]=p[i];
	 printf("Gantt chart\n\n");
	 printf("\n%d",p[1].at);
	 nextval=p1[1].at;
	 for(i=1;i<=n;i++)
	 {
		  nextval=nextval+p1[i].bt;
		  printf("->P%d->%d",p1[i].id,nextval);
		  p[i].ft=nextval;
	 }
}


void turnwait(int n)
{
	 int i;
	 for(i=1;i<=n;i++)
	 {
		  p[i].wt=p[i].tat-p[i].bt;
		  p[0].wt=p[0].wt+p[i].wt;
	 }
	 p[0].wt=p[0].wt/n;
}

void display(int n)
{

	 printf("\n\nAverage Waiting Time: %f\n",p[0].wt);
}
