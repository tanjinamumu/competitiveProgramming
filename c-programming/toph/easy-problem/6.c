#include<stdio.h>
int main()
{
    long long int n,i,m,sum=0,t;
    while(scanf("%lld %lld",&m,&n)==2)
    {
        if(m>n)
        {
            t=n;
            n=m;
            m=t;

        }
        for(i=m;i<=n;i++)

        {
            sum=sum+i;
        }

        printf("Sum of %lld to %lld is -> %lld;\n",m,n,sum);
        sum=0;
    }

    return 0;
}
