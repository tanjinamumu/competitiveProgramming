#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,ans;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>m;
            if(m==1)
            {
               ans=(abs(3-i))+(abs(3-j));
            }
        }
    }
    cout<<ans<<endl;
}
