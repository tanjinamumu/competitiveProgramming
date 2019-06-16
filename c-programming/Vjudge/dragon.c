#include <stdio.h>
int main()
/*
    *****#Welcome to Mumu's Code#*****
*/
{

    int t,n,r[1000],c[1000],i,j,k,l,count=0,sum;
    scanf("%d %d",&t,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&k,&l);
        r[i]=k;
        c[i]=l;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(r[j]>r[j+1])
            {

                int temp;
                temp=r[j];
                r[j]=r[j+1];
                r[j+1]=temp;
                int tempu;
                tempu=c[j];
                c[j]=c[j+1];
                c[j+1]=tempu;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(t>r[i])
        {
            count++;
        }
        t+=c[i];
    }
    if(count==n)
    {
        printf("YES\n");

    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
