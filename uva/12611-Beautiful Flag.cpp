#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=1;
    double r;
    cin>>t;
    while(t--)
    {
        cin>>r;
        cout<<"Case "<<count<<":"<<endl;
        cout<<-2.25*r<<" "<<1.5*r<<endl;
        cout<<2.75*r<<" "<<1.5*r<<endl;
        cout<<2.75*r<<" "<<-1.5*r<<endl;
        cout<<-2.25*r<<" "<<-1.5*r<<endl;
        count++;
    }
    return 0;
}
