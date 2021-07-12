#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum,xa,xb,ya,yb,coconutsum,pulpsum;
    cin>>t;
    while(t--)
    {
        cin>>xa>>xb>>ya>>yb;
        coconutsum=ya/xa;
        pulpsum=yb/xb;
        sum=coconutsum+pulpsum;
        cout<<sum<<endl;
    }
}
