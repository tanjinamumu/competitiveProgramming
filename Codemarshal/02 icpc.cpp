#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b==c)
    {
        cout<<"Equilateral Triangle"<<endl;
    }
    else if(a==b||b==c||c==a)
    {
        cout<<"Isosceles Triangle"<<endl;
    }
    else
    {
        cout<<"Bad Triangle"<<endl;
    }
    return 0;
}
