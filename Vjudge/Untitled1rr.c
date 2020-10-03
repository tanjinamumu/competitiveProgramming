#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,k,sum;
        scanf("%lld %lld %lld",&a,&b,&k);
        if(k%2)
        {
            sum=(a+((a-b)*(k/2)));
        }
        else
        {
            sum=((a-b)*(k/2));
        }
        printf("%lld\n",sum);
    }
}
