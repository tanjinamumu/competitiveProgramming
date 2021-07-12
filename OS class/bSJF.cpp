#include<stdio.h>
#include<conio.h>
#include<string.h>

int Twt,A[20],Wt[20],n,Bu[20];
float Awt;
char pname[20][20];

void Getdata();
void Gantt_chart();
void Sjf();

void Getdata()
{
	int i;
	printf("\nEnter the number of processes: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fflush(stdin);
		printf("\n\nEnter the process name: ");
		scanf("%s",&pname[i]);
		printf("\nEnter The BurstTime for Process %s =	",pname[i]);
		scanf("%d",&Bu[i]);
		printf("\nEnter the Arrival Time for Process %s =	",pname[i]);
		scanf("%d",&A[i]);
	}
}

void Gantt_chart()
{
	int i;
	printf("\n\nGANTT CHART");
	printf("\n--------------------------------------------------------------------\n");
	for(i=1;i<=n;i++)
		printf("|\t%s\t",pname[i]);
	printf("|\t\n");
	printf("\n-----------------------------------------------------------\n");
	printf("\n");
	for(i=1;i<=n;i++)
		printf("%d\t\t",Wt[i]);
	printf("%d",Wt[n]+Bu[n]);
	printf("\n--------------------------------------------------------------------\n");
	printf("\n");
 }

void Sjf()
{
	int w,t,i,B[10],Tt=0,temp,j;
	char S[10],c[20][20];
	int temp1;
	printf("\n\n SHORTEST JOB FIRST SCHEDULING ALGORITHM \n\n");
	Twt=0;
	w=0;
	for(i=1;i<=n;i++)
	{
		B[i]=Bu[i];
		S[i]='T';
		Tt=Tt+B[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=3;j<=n;j++)
		{
			if(B[j-1]>B[j])
			{
				temp=B[j-1];
				temp1=A[j-1];
				B[j-1]=B[j];
				A[j-1]=A[j];
				B[j]=temp;
				A[j]=temp1;
				strcpy(c[j-1],pname[j-1]);
				strcpy(pname[j-1],pname[j]);
				strcpy(pname[j],c[j-1]);
			}
		}
	}

	Wt[1]=0;
	w=w+B[1];
	t=w;
	S[1]='F';
	while(w<Tt)
	{
		i=2;
		while(i<=n)
		{
			if(S[i]=='T'&&A[i]<=t)
			{
				Wt[i]=w;
				S[i]='F';
				w=w+B[i];
				t=w;
				i=2;
			}
			else
				i++;
		}
	}
	for(i=1;i<=n;i++)
	{
		Twt=Twt+(Wt[i]-A[i]);
	}

	Awt=(float)Twt/n;

	printf("\n\nAverageWaiting Time=%3.2f ms",Awt);
	Gantt_chart();
}
int main()
{
	Getdata();
	Sjf();
	getch();
}
