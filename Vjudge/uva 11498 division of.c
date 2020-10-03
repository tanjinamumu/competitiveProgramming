#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    long int t, x, y, m, n,i;
    while(scanf("%ld",&t)==1)
    {
        if(t==0)
            break;
        scanf("%ld %ld",&x,&y);
        for(i=1;i<=t;i++)
        {
            scanf("%ld %ld",&m,&n);
            if(x==m || y==n)
            {
               printf("divisa\n");
            }
            else if(x<m && y<n)
            {
                 printf("NE\n");
            }
            else if(m<x && y<n)
            {
                 printf("NO\n");
            }
            else if(m<x && n<y)
            {
                printf("SO\n");
            }
            else if(x<m && n<y)
            {
                printf("SE\n");
            }

        }
    }
    return 0;
}
