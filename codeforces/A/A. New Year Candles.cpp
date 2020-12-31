#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    while(a>=b)
    {
        c+=b;
        a-=b;
        a++;
    }
    cout<<c+a;
}
