#include<stdio.h>
int main()
{
    long long int a,b,t,i,c;
    scanf("%lld", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&a, &b, &c);
        if((c>=a+b)||(b>=a+c)||(a>=b+c)||(a<=0)||(b<=0)||(c<=0))
        {
            printf("Case %lld: Invalid\n", i);

        }
        else if((a==b) && (b==c))
        {
            printf("Case %lld: Equilateral\n", i);

        }

        else if((a==b)|| (b==c)|| (c==a))
        {

            printf("Case %lld: Isosceles\n", i);
        }
        else
        {
            printf("Case %lld: Scalene\n", i);
        }
    }

    return 0;
}
