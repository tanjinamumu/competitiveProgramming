#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    int i,j,k,a=0,b,c,d;
    while(scanf("%d %d",&i,&j)==2)
    {
        printf("%d %d",i,j);
        if(i>j)
        {
            k=j;
            j=i;
            i=k;
        }
        for(b=i; b<=j; b++)
        {
            c=1;
            d=b;
            while(d>1)
            {
                if(d%2==0)
                {
                   d=d/2;
                }

                else
                {
                    d=(3*d)+1;
                }
                c++;
            }
            if(c>=a)
                a=c;
        }
        printf(" %d\n",a);
    }
    return 0;
}
