#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,p;
    vector<int>n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>p;
        n.push_back(p);
    }
    sort(n.begin(),n.end());
    for(i=0;i<t;i++)
    {
        cout<<n[i]<<endl;
    }
    return 0;
}

