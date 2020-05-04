#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //enables fast io

    int tc,i,maax,countt;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        maax=a[0];  //INT_MAX;
        countt=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<=maax)
            {
                countt++;
                maax=a[i];
            }
        }
        cout<<countt<<endl;
    }
    return 0;
}
