#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans = floor((sqrt((8*n)+1)-1)/2);
        cout << ans << endl;
    }
    return 0;
}
