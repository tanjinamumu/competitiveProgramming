#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==2)
        {
            cout<<n<<endl;
        }
        else
        {
            n=(n/2)+1;
            cout<<n<<endl;
        }
    }
}
