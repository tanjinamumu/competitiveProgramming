#include<stdio.h>
int main()
{
    int a,b,t,i,j,sum;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
    scanf("%d %d",&a, &b);
    if(a%2==0)
    a = a + 1;
    for(j=a,sum=0;j<=b;j=j+2)
        {
            sum=sum+j;
        }
        printf("Case %d: %d\n", i, sum);

    }
    return 0;
}
