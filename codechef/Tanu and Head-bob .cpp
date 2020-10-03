#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sn=0,mn=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                sn++;
                cout<<sn;
            }
            else if(s[i]=='Y')
            {
                mn++;
                cout<<mn;
            }
        }
        if (sn)
        {
            cout << "INDIAN" << endl;
        }
        else if (mn)
        {
            cout << "NOT INDIAN" << endl;
        }
        else
        {
            cout << "NOT SURE" << endl;
        }
    }
    return 0;
}
