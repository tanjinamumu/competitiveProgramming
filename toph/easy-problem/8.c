#include<stdio.h>
int main()
{
    int n,i,sum;
    scanf("%d",&n);
    for(i=0,sum=0; i<=n; i=i+2)
    {
        sum=sum+i;

    }
         printf("%d\n",sum);
    return 0;
}


