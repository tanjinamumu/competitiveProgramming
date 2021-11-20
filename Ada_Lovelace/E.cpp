#include<bits/stdc++.h>
using namespace std;
long long int n,m,o=-1000000007;
int main()
{
    vector<long long int>p,s,d;
    long long int i,j,ans=0, scan = 0;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>scan;
        p.push_back(scan);
    }
    for(i=0; i<m; i++)
    {
        cin>>scan;
        s.push_back(scan);
    }
    for(i=0; i<n; i++)
    {
        cin>>scan;
        d.push_back(scan);
    }
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            ans+=(d[i]-p[j]);
        }
        ans-=s[j];
        if(o<ans)
        {
            o = ans;
        }
        ans =0;
    }

    if(o>=1)
    {
        cout<<"Profit "<<o<<endl;
    }
    else if(o<0)
    {
        cout<<"Loss "<<o*(-1)<<endl;
    }
    else if(o==0)
    {
        cout<<"Neutral"<<endl;
    }

    return 0;
}
