#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,low=0,up=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            if(isupper(s[i]))
            {
                up++;
            }
            else if(islower(s[i]))
            {
                low++;
            }
        }
        if((low<=k)&&(up<=k))
        {
            cout<<"both"<<endl;
        }
        else if((low>=k)&&(up<=k))
        {
            cout<<"chef"<<endl;
        }
        else if((low<=k)&&(up>=k))
        {
            cout<<"brother"<<endl;
        }
        else
        {
            cout<<"none"<<endl;
        }
    }
}
