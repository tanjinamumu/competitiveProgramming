#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int n,m,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        sum=n*m;
        if(sum%2==0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}

