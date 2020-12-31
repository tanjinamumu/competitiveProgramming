#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n;
    if(n/10>m)
    {
        m=n/10;
    }
    if(n%10+(n/100)*10>m)
    {
        m=n%10+(n/100)*10;
    }
    cout<<m;
}
