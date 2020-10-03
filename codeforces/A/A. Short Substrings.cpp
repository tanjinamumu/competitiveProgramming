#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,ss;
        cin>>s;
        ss=s.substr(0,2);
        //cout<<ss;
        for (int i = 3; i < s.size(); i += 2)
        {
            ss+= s[i];
            //cout<<s[i]<<" ";
            //cout<<ss<<endl;

        }
        cout<<ss<<endl;
    }


}
