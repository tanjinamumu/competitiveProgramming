#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,a;
    cin>>n;
    set<int>s;
    cin>>p;
    for(int i=0; i<p; i++)
    {
        cin>>a;
        s.insert(a);
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>a;
        s.insert(a);
    }
    if(s.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }

}
