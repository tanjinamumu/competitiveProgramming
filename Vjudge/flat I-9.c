#include<stdio.h>
/*
    *****#Welcome to Mumu's Code#*****
*/
int main()
{
    int t,i,sum=0,b;

    scanf("%d",&t);

    int a[t];

    for (i=1; i<=t; i++)
    {
        scanf("%d",&a[i]);
    }

    b = t-2;

    for (i=1; i<=b; i++)
    {
        if ((a[i]==1) && (a[i+1]==0) && (a[i+2] == 1))
        {
          a[i+2]=0;
          sum++;
        }
    }
    printf("%d\n",sum);
}
