#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int t,i,m,p,k,sum,arr[1000];
    double a,j,ava,c;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            ava=0;
            sum=0;
            a=0;
            scanf("%lf",&j);
            for(k=0;k<j;k++)
                {
                    scanf("%d",&arr[k]);
                    a=a+arr[k];
                }
                ava=a/j;
                for(m=0;m<j;m++)
                {
                    if(arr[m]>ava)
                       sum=sum+1;
                }
                c=(100*sum)/j;
                printf("%.3lf%%\n",c);
/*
    *****#Welcome to Mumu's Code#*****
*/
        }
    }
    //mor
    return 0;
}


