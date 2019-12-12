#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[1000];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    long int ans=0;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            ans+=abs(a[i]-a[j]);
        }
    }
    printf("%ld\n",ans);
    return 0;
}
