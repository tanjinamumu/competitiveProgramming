#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,l,m;
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>s;
        l=s.size();
        string a,b;
        if(l%2==0)
        {
            a=s.substr(0,l/2);
            b=s.substr(l/2,l/2);

        }
        else
        {
            a=s.substr(0,l/2);
            b=s.substr(l/2+1,l/2);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
