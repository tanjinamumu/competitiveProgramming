#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s,s1;
    cin>>s>>s1;
    for(i=0; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);
    }
    for(i=0; i<s.size(); i++)
    {
        s1[i]=tolower(s1[i]);
    }
    if(s>s1)
    {
        cout<<1;
    }
    else if (s<s1)
    {
        cout<<-1;
    }
    else
    {
         cout<<0;
    }
    return 0;
}
