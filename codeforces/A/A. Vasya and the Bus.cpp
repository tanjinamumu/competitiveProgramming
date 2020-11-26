#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,ans;
    cin>>n>>m;
    if((n==0)&&(m>0))
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(m==0)
    {
        cout<<n<<" "<<n<<endl;
        return 0;
    }
    cout<<max(n,m)<<" "<<((n+m)-1)<<endl;
    return 0;
}
