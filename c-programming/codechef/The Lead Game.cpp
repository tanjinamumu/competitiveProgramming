#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,si,ti,f1=0,f2=0,sum1=0,sum2=0,p1=0,p2=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>si>>ti;
        sum1+=si;
        sum2+=ti;
        if(sum1>=sum2)
        {
            f1=sum1-sum2;
        }
        if(sum2>sum1)
        {
            f2=sum2-sum1;
        }
        if(f1>p1)
        {
            p1=f1;
        }
        if(f2>p2)
        {
            p2=f2;
        }

    }
    if(p1>p2)
    {
        cout<<"1"<<" "<<p1<<endl;

    }
    else
    {
        cout<<"2"<<" "<<p2<<endl;
    }
    return 0;
}
