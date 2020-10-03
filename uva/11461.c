#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    long int a,b,c,i,sum;
    while(scanf("%ld %ld",&a,&b)==2)
    {
       if((a==0)&&(b==0))
       {
           break;
       }
       c=0;
       for(i=a;i<=b;i++)
       {
           sum=sqrt(i);
           if((sum*sum)==i)
           c++;
       }
       printf("%ld\n",c);
    }
}
