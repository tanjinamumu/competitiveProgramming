#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0, maxi=0;
    long long t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        s+="0";
        //cout<<s<<" "<<endl;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='*')
            {
                count++;
                if(count>maxi)
                {
                    maxi=count;
                }
            }
            else
            {
                count=0;
                if(maxi>=k)
                {
                   break;
                }
            }
        }
        //cout<<"count"<<" "<<count<<endl;
        if(maxi>=k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
