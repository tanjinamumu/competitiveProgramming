#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,k,co=0;
    cin>>a>>b>>c;
    cin>>k;
    while(a>=b)
    {
        co+=1;
        b*=2;
    }
    while(b>=c)
    {
        co+=1;
        c*=2;
    }
    if(co<=k)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
