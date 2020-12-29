#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2!=0)
        {
            n--;
        }
        cout<<n/2<<endl;
    }
    return 0;
}
