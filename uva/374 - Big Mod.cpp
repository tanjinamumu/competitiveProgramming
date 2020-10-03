#include<bits/stdc++.h>
using namespace std;
long long int bigmod(long long int b, long long int p, long long int m)
{
    if(p==0)
    {
        return 1;
    }
    if(p%2==0)
    {
        long long int ans=bigmod(b,p/2,m);
        return(ans*ans)%m;
    }
    else if(p%2==1)
    {
        long long int x=b%m;
        long long int y=bigmod(b,p-1,m);
        return (x*y)%m;
    }
}

int main()
{
    long long int b,p,m;
    while(cin>>b>>p>>m)
    {
        cout<<bigmod(b,p,m)<<endl;
    }
    return 0;
}

