#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>a,b;
    int n,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        a.insert(x);
        b.insert(y);
    }
    cout<<min(a.size(),b.size())<<endl;
}
