#include<stdio.h>
int main()
{
    int n,i,m,sum;
    while(scanf("%d %d",&m,&n)==2)
    {
        for(i=m,sum=0;i<=n;i++)

        {
            sum=sum+i;
        }

        printf("Sum of %d to %d is -> %d;\n",m,n,sum);
    }

    return 0;
}

