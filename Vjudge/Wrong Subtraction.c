#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    long long int n,a,i,b=0;
    scanf("%lld %lld", &n, &a);
    for(i=1; i<=a; i++)
        {
           b=n%10;
           if(b==0)
           {
               n/=10;
           }
           else
            {
                n-=1;
            }
        }
        printf("%lld\n",n);
        return 0;
}
