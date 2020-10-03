#include<stdio.h>
int main()
{
    long long int n,a,b,c,sum;
    scanf("%lld",&n);
    a=n/2;
    b=n/3;
    c=n/4;
    sum=a+b+c;
    if(sum==1)
    {
        printf("2\n");
    }
    else
    {
        printf("%lld\n",sum);
    }
}
