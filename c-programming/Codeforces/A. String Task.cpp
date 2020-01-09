#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        char m = tolower(s[i]);
        if (m != 'a' && m != 'o' && m != 'e' && m != 'u' && m != 'y' && m != 'i')
            cout<<"."<<m;
    }
}
