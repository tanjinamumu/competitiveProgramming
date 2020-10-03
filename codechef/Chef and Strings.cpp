#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,tc,diff,c;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        long long int s[n];
        for(i=0; i<n; i++)
        {
            cin>>s[i];
        }
        c=0;
        for(i=0; i<n-1; i++)
        {
            if(s[i]<s[i+1])
            {
                diff=(s[i+1]-s[i])-1;
                c+=diff;
            }
            else
            {
                diff=(s[i]-s[i+1])-1;
                c+=diff;

            }
        }
        cout<<c<<endl;
    }
    return 0;
}



//b-a-1
