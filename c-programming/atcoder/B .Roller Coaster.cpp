#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,k;
    cin>>n>>k;
    long long int h[n],c=0;
    for(i=0;i<n;i++)
    {
        cin>>h[i];
        if(h[i]>=k)
        {
            c++;
        }
    }
    cout<<c<<endl;
}

