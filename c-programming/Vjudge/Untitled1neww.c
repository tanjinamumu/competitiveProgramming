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
        long long int s,a,b,c,sum,add;
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        sum=s/c;
        add=((sum/a)*b)+sum;
        printf("%lld\n",add);
    }

}
/*
2
10 3 1 1
1000000000 1 1000000000 1
*/
