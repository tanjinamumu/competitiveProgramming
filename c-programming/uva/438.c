#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,a,b,c,s,l,r,Re,pi=3.141592653589793;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
        c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
        s=(a+b+c)/2;
        l=(sqrt(s*(s-a)*(s-b)*(s-c)));
        r=(a*b*c)/(4*l);
        Re=2*pi*r;
        printf("%.2lf\n",Re);
    }
    return 0;
}
