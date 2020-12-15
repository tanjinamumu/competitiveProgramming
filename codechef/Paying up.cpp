#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int b[1005];
        for(int i=0; i<=m; i++)
        {
            b[i]=0;
        }
        while(n--)
        {
            cin>>k;
            for(int i=m; i>=0; i--)
            {
                if(b[i]&&(i+k<=m))
                {
                    b[i+k]=1;
                }
            }
            b[k]=1;
        }

        if(b[m])
         {
             cout<<"Yes"<<endl;
         }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
