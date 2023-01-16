#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,o=0;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            o=1;
        }
    }
    if(o==0)
    {
        cout<<"NO PUNISHMENT"<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
        }
    }
}
