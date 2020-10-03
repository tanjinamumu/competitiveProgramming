#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int t,a[100],k,ava,i,j,sum,set=1;
    while(scanf("%d",&t)==1)
    {
        if(t==0)
        break;
        sum=0;
        for(i=1;i<=t;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        ava=sum/t;
        k=0;
        for(j=1;j<=t;j++)
            {
                if(a[j]>ava)
                k+=(a[j]-ava);
            }
            printf("Set #%d\n",set);
            set++;
            printf("The minimum number of moves is %d.\n\n",k);
    }
    return 0;
}
