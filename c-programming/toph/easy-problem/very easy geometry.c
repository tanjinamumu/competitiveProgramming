#include <stdio.h>
#include<math.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int t,i;
    double a,b,c,ar1,ar2,ar;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        ar2=fabs(0.5*(c*c)*(sin(a)));
        ar1=fabs((b*b*a)/2.0);
        ar=fabs(ar2-ar1);
        printf("Case %d: %.8lf\n", i, ar);
    }
    return 0;
}
