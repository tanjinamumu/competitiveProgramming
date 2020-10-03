#include<stdio.h>
int main()
{
    int a,r1,r2,r3,r4;
    double sum;
    while(scanf("%d %d %d %d %d",&a,&r1,&r2,&r3,&r4)!=EOF)
    {
        sum=((a*a)-((r1*r1)+(r2*r2)+(r3*r3)+(r4*r4))*(acos(-1))*.25);
        printf("%.3lf\n",sum);

    }
    return 0;
}
