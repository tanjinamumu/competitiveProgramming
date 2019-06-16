#include<stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{
    long int t,r,c,i,j,k,count,sum;
    scanf("%ld",&t);
    while(t--)
    {
        count=0;
        sum=0;
        scanf("%ld %ld",&r,&c);
        long int box[r][c];
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%ld",&box[i][j]);
            }
        }
        for(i=0;i<r;i++)
        {
            sum=0;
            for(j=0;j<c;j++)
            {
                sum=0;
                if(i!=0)
                {
                    sum++;
                }
                if(i!=r-1)
                {
                    sum++;
                }
                if(j!=0)
                {
                    sum++;
                }
                if(j!=c-1)
                {
                    sum++;
                }
                if(sum<=box[i][j])
                {
                    count=1;
                    break;
                }
            }
            if(count==1)
                break;
        }
        if(count==1)
        {
            printf("Unstable\n");
        }
        else
        {
            printf("Stable\n");
        }

    }
    return 0;
}
