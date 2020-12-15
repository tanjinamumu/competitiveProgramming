#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=1;
    cin>>t;
    while(t--)
    {
        int n,j;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        j=n/2;
        cout<<"Case "<<count++<<": "<<a[j]<<endl;
    }
}
