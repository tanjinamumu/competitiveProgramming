#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int i;
    double a,t,sum=0.0;
    scanf("%lf",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&a);
        sum=sum+a;
    }
    printf("%.12lf\n", sum/t);
}
