#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,o,p,sum;
        cin>>n;
        sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>m>>o>>p;
            sum +=(m*p);
        }
        cout<<sum<<endl;
    }
    return 0;
}
