#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,mx,ans=0,a[101];
    cin>>n;
    for(i=0; i< n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    mx=a[n-1];
    for(i=0; i<n-1; i++)
    {
        ans+=mx-a[i];
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
