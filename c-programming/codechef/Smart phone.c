#include <stdio.h>
int main()
{
    long long int n,i,j=0,count=1,max=0;
    int a[1000000];
    long int sum[1000000];
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    while(j<=n-1)
    {
        for(i=0; i<n; i++)
        {
            if(a[j]<=a[i] && i!=j)
            {
                count++;
            }
        }
        sum[j]=count * a[j];
        if(max<sum[j])
        {
            max=sum[j];
        }
        j++;
        count=1;
    }
    if(a[n-1]>max)
    {
        max=a[n-1];
    }
    printf("%lld",max);
    return 0;
}



