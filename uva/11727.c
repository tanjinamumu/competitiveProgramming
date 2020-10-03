#include<stdio.h>
int main()
{
    int t,i;
    long long int a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(((a>b)&&(b>c))||((a<b)&&(b<c)))
        {
            printf("Case %d: %lld\n",i,b);
        }
        else if(((b>c)&&(c>a))||((b<c)&&(c<a)))
        {
            printf("Case %d: %lld\n",i,c);
        }
        else if(((c>a)&&(a>b))||((c<a)&&(a<b)))
        {
            printf("Case %d: %lld\n",i,a);
        }
    }
    return 0;
}
