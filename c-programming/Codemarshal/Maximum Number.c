#include<stdio.h>
int main()
{
    int a,b,c,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a>b)&&(a>c))
        {
            printf("Case %d: %d\n",i,a);
        }
        else if((b>c)&&(b>a))
        {
            printf("Case %d: %d\n",i,b);
        }
        else if((a==b)&&(b==c))
        {
            printf("Case %d: %d\n",i,a);
        }
        else
        {
            printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}
