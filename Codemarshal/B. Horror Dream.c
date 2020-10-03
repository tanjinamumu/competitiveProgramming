#include<stdio.h>
int main()
{
    int s,d,u,t,a,b;
    scanf("%d %d %d",&d,&u,&t);
    s=((u*t)+5*(t*t));
    a=d+5;
    b=d-15;
    if(s>a)
    {
        printf("Hits a six\n");
    }
    else if(s<b)
    {
        printf("Not out\n");
    }
    else
    {
        printf("Out\n");
    }
    return 0;
}
