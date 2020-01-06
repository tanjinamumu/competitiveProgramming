#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,st;
    int n,i,j,k,c=1;
    cin>>n;
    while(n--)
    {
        cin>>st;
        s+=st;
    }
    n=s.size();
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}





