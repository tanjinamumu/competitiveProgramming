#include<stdio.h>
int main()
{
    long long int a,b,sum;
    while(scanf("%lld %lld",&a,&b)==2)
    {

        if(a > b)
        {
            sum=a-b;
            printf("%lld\n",sum);
        }

        else
        {
             sum=b-a;
             printf("%lld\n",sum);
        }

    }

    return 0;
}



