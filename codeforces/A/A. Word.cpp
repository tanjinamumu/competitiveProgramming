#include<bits/stdc++.h>
using namespace std;
int main()
{
    int high=0,low=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(islower(s[i]))
        {
            low++;
        }
        else
        {
            high++;
        }
    }
    if (low>=high)
    {
        for(int i=0;i<s.length();i++)
        {
            if (isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }

        }
        cout<<s<<endl;
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
