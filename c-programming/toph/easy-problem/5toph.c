#include<stdio.h>
int main()
{
    int n,i,a,b,c,sum,sub;

    scanf("%d",&n);
    scanf("%d %d %d",&a, &b, &c);
    sum=a+b+c;
    sub=n-sum;
    printf("%d",sub);
    return 0;
}
