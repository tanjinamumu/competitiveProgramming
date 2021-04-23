#include<bits/stdc++.h>
using namespace std;
double round(double div)
{
    double x=div*100.00;
    if(x<0)
    {
        x=x-0.5;
    }
    else
    {
        x=x+0.5;
    }
    int y=x; // cuts off remainder
    x=y/100.00;
    return x;
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        double k1,k2,k3,v,x,y,mul,div,div1;
        cin>>k1>>k2>>k3>>v;
        mul=k1*k2*k3*v;
        //cout<<mul<<endl;
        div=100.0/mul;
        div1=round(div);
        //cout<<div1<<endl;
        if(div1<9.58)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
