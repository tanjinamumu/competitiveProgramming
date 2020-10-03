#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    long long int t,i,a[20000010];
    while(scanf("%lld",&t)==1)
    {
        if(t==0)
        break;
        for(i=1;i<=t;i++)
        {
            scanf("%lld",&a[i]);
            sort(a,a+i);
        }
        for(i=1;i<=t;i++)
        {
            printf("%lld",a[i]);
            if(i<t-1)
            {
                printf(" ");
            }
            printf("%lld",t);
        }
    }

}
