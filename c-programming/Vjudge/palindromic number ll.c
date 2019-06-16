#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    long long int n, j, temp, sum;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld", &n);
        temp=n;
        sum=0;
        while(n!= 0)
        {
            j=n%10;
            sum=(sum*10)+j;
            n=n/10;
        }
        if (sum == temp)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);
        }
    }
    return 0;
}

