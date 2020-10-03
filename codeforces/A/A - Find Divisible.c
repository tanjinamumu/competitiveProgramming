#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       long long int l,r,sum;
       scanf("%lld %lld",&l,&r);
       sum=l*2;
       printf("%lld %lld\n",l,sum);
    }
}

