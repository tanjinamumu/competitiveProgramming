#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2;
        int l1=s1.length();
        //cout<<l1<<" "<<"12"<<endl;
        int l2=s2.length();
        //cout<<l2<<" "<<"14"<<endl;
        int c=0,c1=0;
        for(int i=0; i<l1; i++)
        {
            if(s1[i]=='?'&&s2[i]=='?')
            {    c++;
                //cout<<c<<" "<<"20"<<endl;
            }
            else if(s2[i]=='?'&&s1[i]!='?')
            {    c++;
                //cout<<c<<" "<<"24"<<endl;
            }
            else if(s1[i]=='?'&&s2[i]!='?')
            {    c++;
                //cout<<c<<" "<<"28"<<endl;
            }
            if((s1[i]==s2[i])&&s1[i]!='?')
            {    c1++;
                //cout<<c1<<" "<<"32"<<endl;
            }
        }
        int sum1=l1-c-c1;
        int sum2=l1-c1;

        cout<<sum1<<" "<<sum2<<endl;
    }
}
