#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    long long int w1,h1,w2,h2,sum;
    scanf("%lld %lld %lld %lld",&w1,&h1,&w2,&h2);
    sum=((2*(h1+h2))+(w1+w2)+4+(w1-w2));
    printf("%lld\n",sum);
}
