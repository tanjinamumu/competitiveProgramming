#include<stdio.h>
int main()
/*
*****#Welcome to Mumu's Code#*****
*/
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       double x,y,r,sum,m,n;
       scanf("%lf %lf %lf",&x,&y,&r);
       sum=sqrt((x*x)+(y*y));
       m=r-sum;
       n=r+sum;
       printf("%.2lf %.2lf\n",m,n);
    }
    return 0;
}
