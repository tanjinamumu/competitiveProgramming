#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans,count;
    while(cin>>n)
    {
        ans=0;
        count=0;
        do
        {
            count=((count*10+1)%n);
            ans++;
        }
        while(count!=0);
        cout<<ans<<endl;
    }
    return 0;
}
