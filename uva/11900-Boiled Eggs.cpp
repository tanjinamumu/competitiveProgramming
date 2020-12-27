#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q,sum,i,count=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>p>>q;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sum=0;
        for(i=0; i<n; i++)
        {
            if((i>=p)||(sum+a[i]>q))
            {
                break;
            }
            else
            {
                sum+=a[i];
            }
        }
        count++;
        cout<<"Case "<<count<<": "<<i<<endl;
    }
    return 0;
}
