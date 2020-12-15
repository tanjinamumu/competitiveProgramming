#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,n,a;
    while(scanf("%d %d",&n,&a)==2)

    {
        for(int i=1; i<=n; i++)
        {
            sum=sum+(i*pow(a,i));
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
