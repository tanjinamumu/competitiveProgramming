#include<stdio.h>
int main()
{
    int t,s,n,i,j,k;
    scanf("%d",&t);
    for(s=1; s<=t; s++)
    {
        scanf("%d",&n);
        printf("Case %d:\n",s);
        for(i=1; i<=n; i++)
        {
            for(k=1; k<=i; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(j = n; j > 1; j--)
        {
            int te= j;
            for(k = te; te > 1; te--,k--)
            {
                printf("*");
            }
            printf("\n");
        }

    }
}
