#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,q;
    string s[50],t[50];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>t[j];
    }
    cin>>q;
    for(k=0;k<q;k++)
    {
       int y;
       cin >> y;
       y--;
       cout << s[y % n] + t[y % m] << endl;
    }
}
