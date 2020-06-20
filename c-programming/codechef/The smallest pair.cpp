#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n];
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
        }
        sort(x,x+n);
        cout<<x[0]+x[1]<<endl;
    }


}
