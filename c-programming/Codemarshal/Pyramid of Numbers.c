#include<stdio.h>
int main()
{
    int t,n,i,j,a;
    scanf("%d",&t);
    for(a=1;a<=t;a++)
    {
        scanf("%d",&n);
        printf("Case %d:\n",a);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
    }
    return 0;
}
