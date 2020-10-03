#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,x=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[0]=='+')
        {
            x++;
        }
        if(s[2]=='+')
        {
            x++;
        }
        if(s[0]=='-')
        {
            x--;
        }
        if(s[2]=='-')
        {
            x--;
        }
    }
    cout<<x<<endl;
}
