#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,b,t;
    cin>>t;
    while(t--)
    {
        cin>>b;
        n=(b/2)-1;
        cout<<((n*(n+1))/2)<<endl;
    }
}
