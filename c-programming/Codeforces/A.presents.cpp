#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p[101],i,frnd;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>frnd;
        p[frnd]=i;
    }
    for(i=1;i<=n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
