#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int m,c;
    int mi=0,ci=0;
    for(int i=0; i<t; i++)
    {
        cin>>m>>c;
        if(m>c)
        {
            mi++;
        }
        if(c>m)
        {
            ci++;
        }
    }
    if(mi>ci)
    {
        cout<<"Mishka"<<endl;
    }
    if(ci>mi)
    {
        cout<<"Chris"<<endl;
    }
    if(mi==ci)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
