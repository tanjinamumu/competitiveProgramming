#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,i;
    long long int x,d,n,m,ans;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>q;
        while(q--){
            cin>>x>>d>>n;
            n=n-1;
            m= n*d;
            ans = x+m;
            cout<<ans<<endl;
        }
    }


    return 0;
}
