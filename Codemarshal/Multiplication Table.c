#include<stdio.h>
int main()
{
    long int t,n,i,j,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%ld * %ld = %ld\n",n,j,n*j);
        }

    }
    return 0;
}
