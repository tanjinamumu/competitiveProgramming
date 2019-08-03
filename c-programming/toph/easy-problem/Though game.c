#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,sum,ava;
        scanf("%d %d",&a,&b);
        sum=a+b;
        ava=sum/2;
        if(ava%2==0)
        {
            printf("Sadia will be happy.\n");
        }
        else
        {
            printf("Oops!");
        }
    }
}
