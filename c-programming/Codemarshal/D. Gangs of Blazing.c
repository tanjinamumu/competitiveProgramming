#include<stdio.h>
int main()
{
    int r1,r2,r3,o1,o2,o3,on,sum,avg;
    scanf("%d %d %d %d %d %d",&r1,&r2,&r3,&o1,&o2,&o3);
    sum=r1+r2+r3;
    on=o1+o2+o3;
    if(on==0)
    {
        avg=sum;
    }
    else
    {
        avg=sum/on;
    }
    printf("%d\n",avg);
    return 0;
}

