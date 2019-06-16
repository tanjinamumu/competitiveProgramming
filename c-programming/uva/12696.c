#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int t,i,n;
    double l,w,d,m;
    n=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf",&l,&w,&d,&m);
        if(((l<=56 && w<=45 && d<=25) || (l+w+d<=125)) && m<=7)
        {
            printf("1\n");
            n++;
        }
        else
        {
            printf("0\n");
        }
    }
    printf("%d\n",n);
    return 0;
}
