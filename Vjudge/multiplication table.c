#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int n,a,i,sum=0;
    scanf("%d %d",&n,&a);
    for(i=1;i<=n;i++)

    {
        if(a%i==0 && (a/i)<= n)

        {
            sum++;
        }

    }

    printf("%d\n",sum);

    return 0;
}
