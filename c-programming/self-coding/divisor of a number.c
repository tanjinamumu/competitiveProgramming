#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    m=sqrt(n);
    for(i=1; i<=m; i++)
    {
        if(m%i==0)
        {
            printf("%d\n",i);
            printf("%d\n",m/i);
        }

    }
}
