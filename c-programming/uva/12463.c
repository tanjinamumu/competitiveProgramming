#include<stdio.h>
int main()
/*
*****#Welcome to Mumu's Code#*****
*/
{
    int a,b,c,d,e,sum;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)==5)
    {
        if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0))
        {
            break;
        }
        sum=a*b*c*d*d*e*e;
        printf("%d\n",sum);
    }
    return 0;
}
