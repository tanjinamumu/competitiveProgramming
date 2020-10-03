#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,d=0,l,i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else if(s[i]=='D')
        {
            d++;
        }
    }
    if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(d>a)
    {
        cout<<"Danik"<<endl;
    }
    else if(a==d)
    {
        cout<<"Friendship"<<endl;
    }

    return 0;
}
