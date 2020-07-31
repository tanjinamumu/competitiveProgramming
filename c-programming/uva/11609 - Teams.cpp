#include<bits/stdc++.h>
#define m 1000000007
using namespace std;

long long int bigmod(long long int b, long long int p)
{
    if(p==0)
    {
        return 1;
    }
    if(p%2==0)
    {
        long long int ans=bigmod(b,p/2);
        return(ans*ans)%m;
    }
    else if(p%2==1)
    {
        long long int x=b%m;
        long long int y=bigmod(b,p-1);
        return (x*y)%m;
    }
}
int main()
{
    long long int t,n;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        cout<<"Case #"<<i<<":"<<" "<<((bigmod (2, n - 1) * (n % m)) % m) << endl;
    }
}
//n*pow(2,n-1)
