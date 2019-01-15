#include<stdio.h>
int main()
{
    int n,sum,start,dif,end;
    scanf("%d %d %d", &start, &end, &dif);
    for(n=start,sum=0; n<=end; n=n+dif)
    {
        sum=sum+n;
        printf("%d\n", n);
    }
    printf("\n");
    printf("The sum of the series is: %d\n", sum);
    return 0;
}
