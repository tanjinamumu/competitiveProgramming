#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a%b==0)
        {
            cout<<a<<" is a multiple of "<<b<<endl;
        }
        else
        {
            cout<<a<<" is not a multiple of "<<b<<endl;
        }
    }
    return 0;
}

