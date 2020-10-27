#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,fact=1;
    cin>>t;
    string n[102];
    for(i=1; i<=t; i++)
    {
        cin>>n[i];
        for(j=1; j<=n[i];j++)
        {
            fact=fact*j;
        }
        cout<<fact<<endl;
        fact=1;
    }
    return 0;
}
