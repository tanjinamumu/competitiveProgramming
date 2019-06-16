#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    double n,p,sum;
    while(scanf("%lf %lf",&n,&p)==2)
    {
        sum=pow(p,1/n);
        printf("%.0lf\n",sum);
    }
    return 0;
}
