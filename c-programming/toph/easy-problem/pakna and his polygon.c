#include<stdio.h>
int main()
{
    int t;
    long int s;
    double area;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&s);
        area=(3*sqrt(3)*pow(s,2))/2;
        printf("%.5lf\n",area);
    }
    return 0;
}
