#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,fac;
    cin>>t;
    while(t--)
    {
        cin>>n;
        fac=1;
        for(i=1;i<=n;i++)
        {
            fac=fac*i;
        }
        cout<<fac<<endl;
    }
    return 0;
}
