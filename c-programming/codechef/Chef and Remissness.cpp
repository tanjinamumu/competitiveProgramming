#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,a,b,sum,mx;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        mx=max(a,b);
        sum=a+b;
        cout<<mx<<" "<<sum<<endl;
    }
    return 0;
}
