#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,w,n,ans=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        ans+=i*k;
    }
    if(ans>n)
    {
        cout<<ans-n;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
