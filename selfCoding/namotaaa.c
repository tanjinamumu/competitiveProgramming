#include<stdio.h>
int main()
{
    int n, sum, i,s;
    scanf("%d", &n);
    scanf("%d", &s);
    for(i=1; i<=s; i++)
    {
        sum = n * i;
        printf("%d*%d=%d\n", n, i, sum);
    }
    return 0;
}

