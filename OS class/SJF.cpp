#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    int pid;
    float at, wt, bt, ta, st;
    bool isComplete;
} process;

void procdetail(int i, process p[])
{
    printf("Process id: ");
    scanf("%d", &p[i].pid);
    printf("Arrival Time: ");
    scanf("%f", &p[i].at);
    printf("Burst Time: ");
    scanf("%f", &p[i].bt);
    p[i].isComplete = false;
}//procdetail

void sort(process p[], int i, int start)
{
    int k = 0, j;
    process temp;
    for (k = start; k<i; k++)
    {
        for (j = k+1; j<i; j++)
        {
            if(p[k].bt < p[j].bt)
                continue;
            else
            {
                temp = p[k];
                p[k] = p[j];
                p[j] = temp;
            }
        }
    }
}//sort

int main()
{
    int n, i, k = 0, j = 0;
    float avgwt = 0.0, avgta = 0.0, tst = 0.0;
    printf("Enter number of processes: ");
    scanf("%d",&n);
    process p[n];
    for (i = 1; i<=n; i++)
    {
        printf("\nEnter process details: \n");
        procdetail(i,p);
    }
    for (i = 0; i<n; i++)
    {
        if (p[i].isComplete == true)
        {
            continue;
        }
        else
        {
            k = i;
            while (p[i].at<=tst && i<n)
            {
                i++;
            }
            sort(p,i,k);
            i = k;
            if(p[i].at<=tst)
            {
                p[i].st = tst;
            }
            else
            {
                p[i].st = p[i].at;
            }
            p[i].st = tst;
            p[i].isComplete = true;
            tst += p[i].bt;
            p[i].wt = p[i].st - p[i].at ;
            p[i].ta = p[i].bt + p[i].wt;
            avgwt += p[i].wt;
            avgta += p[i].ta;
        }
    }

    printf("\nProcess Schedule Table: \n\n");
    printf("Process-ID\t Arrival Time\t Burst Time\t Wait Time\t Turnaround Time\n");
    for (i=0; i<n; i++)
    {
        printf("%d\t %f\t %f\t %f\t %f\n", p[i].pid, p[i].at, p[i].bt, p[i].wt, p[i].ta);
    }

    printf("\nAverage wait time: %f", avgwt /= n);
    printf("\nAverage turnaround time: %f\n", avgta /= n);
}//main
