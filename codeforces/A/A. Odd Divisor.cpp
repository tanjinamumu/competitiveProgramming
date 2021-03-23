#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n%2==0)
        {
            n=n/2;
        }
        if(n%2==1&&n!=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
