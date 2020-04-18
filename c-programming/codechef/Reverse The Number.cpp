#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc,n,i;
    cin>>tc;
    while(tc>0)
    {
        long long rev=0,rem;
        cin>>n;
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        cout<<rev<<endl;
        tc--;
    }
    return 0;
}
