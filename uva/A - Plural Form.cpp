#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i=s.size();
    if(s[i-1]=='s')
    {
        s+= "es";
    }
    else
    {
        s+="s";
    }
    cout<<s<<endl;
}
