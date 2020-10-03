#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,k,i;
    cin>>n>>p>>k;
    if((p-k)>1)
    {
        cout<<"<< ";
    }
    for(i=p-k; i<=p+k; i++)
    {
        if(i==p)
        {
            cout<<"("<<i<<") ";
        }
        else if(1<=i&&i<=n)
        {
            cout<<i<<" ";
        }
    }
    if((p+k)<n)
    {
        cout<<">> ";
    }

}
