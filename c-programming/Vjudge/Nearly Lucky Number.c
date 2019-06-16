#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    long long int n,sum=0;
    scanf("%lld",&n);
    while(n!=0)
    {
        if(n%10==4||n%10==7)
        {
            sum+=1;
        }
        n/=10;
    }
    if(sum==4||sum==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;

}
