#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       float a,b,c,s,area;
       scanf("%f %f %f",&a,&b,&c);
       s = (a+b+c)/2;
       area=(sqrt(s * (s-a) * (s-b) * (s-c)));
       if(((a+b)>c)||((b+c)>a)||((c+a)>b))
       {
           printf("%.2f\n",area);
       }
       else
       {
           printf("Oh, No!");
       }
    }
    return 0;
}
