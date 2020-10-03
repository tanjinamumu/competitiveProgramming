#include<stdio.h>
int main()
{
    char s;
    int t,a,b,i,add,sub,mul;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%d %c %d",&a,&s,&b);
        if(s=='+')
        {
            add=a+b;
            printf("Case %d: %d\n",i,add);
        }
        else if(s=='-')
        {
            sub=a-b;
            printf("Case %d: %d\n",i,sub);
        }
        else if(s=='*')
        {
            mul=a*b;
            printf("Case %d: %d\n",i,mul);
        }
    }
    return 0;
}
