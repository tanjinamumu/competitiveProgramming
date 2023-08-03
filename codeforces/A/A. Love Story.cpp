#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt;
    cin>>t;
    while(t--)
    {
        string s, c;
        cin>>s;
        c="codeforces";
        cnt=0;
        for(int i=0; i<10; i++)
        {
            if(s[i]!=c[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
