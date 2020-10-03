#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    if((b+c)<=a)
    {
        sum=(a-(b+c)+1);
    }
    else if((a+c)<=b)
    {
        sum=(b-(a+c)+1);
    }
    else if((a+b)<=c)
    {
        sum=(c-(a+b)+1);
    }
    else
    {
        sum=0;
    }
    printf("%d\n",sum);
}
