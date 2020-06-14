#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[10],i;
    for(i=1; i<=5; i++)
    {
        cin>>x[i];
    }
    for(i=1; i<=5; i++)
    {
        if(x[i]==0)
        {
            cout<<i<<endl;
        }
    }
}
