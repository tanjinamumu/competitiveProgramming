#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int t,n,k,sum;
    while(scanf("%d %d",&n,&k)==2)
    {
        sum=n+(n-1)/(k-1);
        printf("%d\n",sum);
    }

    return 0;
}
