#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int a,b;
        long long sum;
        scanf("%ld %ld",&a,&b);
        sum=a*b;
        printf("%lld\n",sum);
    }
    return 0;

}
