#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<3 || n==4)
        {
            cout<<"-1"<<endl;
        }
        else if(n%3==0)
        {
            cout<<n/3<<" 0 0"<<endl;
        }
        else if(n%3==1)
        {
            cout<<n/3-2<<" 0 1"<<endl;
        }
        else
        {
            cout<<n/3-1<<" 1 0"<<endl;
        }
    }
}


