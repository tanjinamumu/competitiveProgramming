#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int tnum;
        int sub[20]={0};
        cin>>tnum;
        for(int i=0; i<tnum; i++)
        {
            int p,s;
            cin>>p>>s;
            sub[p]=max(sub[p],s);
        }
        int c=0;
        for(int i=1; i<=8; i++)
        {
            c+=sub[i];

        }
        cout<<c<<endl;
    }
}

