#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    long long int t,n,i,sum,sum2;
    scanf("%lld",&n);
    sum=n/2;
    sum2=sum-1;
    printf("%lld\n", sum);

    if(n%2==0)
    {
        for(i=1; i<=sum2; i++)
        {
             printf("2 ");
        }
        printf("2");
    }
    else
    {
        for(i=1; i<=sum2; i++)
        {
            printf("2 ");
        }
        printf("3");
    }
}
