#include<bits/stdc++.h>
using namespace std;
int luckynum(long long n)
{
    int count=0;
    while(n)
    {
        int t=n%10;
        if(t==4||t==7)
        {
            count++;
        }
        n/=10;
    }
    return count;
}
int main()
{
    long long n;
    cin>>n;
    int t=luckynum(n);
    if(t==4||t==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
