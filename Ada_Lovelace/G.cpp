#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum5;
    double n,a,A,b,B,C,c,sum,sum2,sum3,sum4;
    A=0.5;
    B=1;
    C=2;
    cin>>n>>a>>b>>c;
    if(n<=(a+b+c))
    {
        sum=A/a;
        sum2=B/b;
        sum3=C/c;
        sum4=sum+sum2+sum3;
        sum5=n-sum4;
        cout<<sum5<<endl;
    }
    else if(n>(a+b+c))
    {
        cout<<0<<endl;
    }
}
