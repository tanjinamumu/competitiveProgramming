#include<stdio.h>
int main()
{
    int t,i,l,b,h;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&l,&b,&h);
        if((l<=20)&&(b<=20)&&(h<=20))
        {
            printf("Case %d: good\n",i);
        }
        else
        {
            printf("Case %d: bad\n",i);
        }
    }
    return 0;
}
