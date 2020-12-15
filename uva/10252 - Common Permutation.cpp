#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    while(getline(cin,s))
    {
        getline(cin, ss);
        int s_size= s.size();
        int ss_size= ss.size();

        sort(s.begin(), s.end());
        sort(ss.begin(), ss.end());

        if(s == ss)
        {
            cout<<s<<endl;
            continue;
        }
        for(int i=0,j=0; i<s_size && j<ss_size; )
        {
            if(s[i] == ss[j])
            {
                cout<<s[i];
                i++;
                j++;
            }
            else
            {
                while(s[i]<ss[j])
                {
                    i++;
                    if(i==s_size)
                    {
                        break;
                    }
                }
                while(ss[j]<s[i])
                {
                    j++;
                    if(j==ss_size)
                    {
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
