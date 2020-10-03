#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0;
    string s;
    getline(cin,s);
    int l=s.size();
    for(i=0; i<l; i++)
    {
        if(s[i]=='a')
        {
            c++;
        }
    }
    int n=((2*c)-1);
    int m=min(l,n);
    cout<<m<<endl;
}
