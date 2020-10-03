#include<stdio.h>
int main()
{
    int v,t,d;
    while(scanf("%d %d",&v,&t)==2)
    {
        d=v*(2*t);
        printf("%d\n",d);
    }
    return 0;
}
