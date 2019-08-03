#include<stdio.h>
int main()
{
    int over,t,i,n,total_run,ans,run,run_rate;
    while(scanf("%d",&over)!=EOF)
    {
        total_run=0;
        for(i=1; i<=(over*6); i++)
        {
            scanf("%d",&run);
            total_run+=run;
        }
        run_rate=total_run/over;
        t=50-over;
        ans=(run_rate*t)+total_run;
        printf("%d\n",ans);
    }
}
