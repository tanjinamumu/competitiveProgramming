#include<bits/stdc++.h>
using namespace std;

static int N = 1000;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0, i=0, j=0;
        set<pair<int, int>> st;

        for(auto x:s)
        {
            int a=i;
            int b=j;
            if(x=='N')
            {
                j++;
            }
            else if(x=='S')
            {
                j--;
            }
            else if(x=='W')
            {
                i--;
            }
            else if(x=='E')
            {
                i++;
            }

            if(st.find({a+i,b+j})==st.end())
            {
                st.insert({a+i,b+j});
                ans+=5;
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

