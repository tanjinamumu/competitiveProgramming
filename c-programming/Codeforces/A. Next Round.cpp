#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[51],c=0,d=0,i;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }
    for(i=0; i<n; i++)
    {
        if (a[i]>=1 && a[i]>=a[k-1])
        {
            c++;
        }
    }
    cout<<c<<endl;
}
