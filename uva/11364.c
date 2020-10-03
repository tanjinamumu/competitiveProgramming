#include<stdio.h>
int main()
{
    int t,n,i,j,p,d,max,min;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        min=100;
        max=0;
        for(j=1; j<=n; j++)
        {
            scanf("%d",&p);
            if (max<p)
            {
                max=p;
            }
            if(min>p)
            {
                min=p;
            }
        }
        d=(max-min)*2;
        printf("%d\n",d);
    }

}
