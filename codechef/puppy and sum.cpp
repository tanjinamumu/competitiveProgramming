#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d,n,i,j,sum;
    cin>>t;
    while(t--)
    {
        cin>>d>>n;
        for(i=1;i<=d;i++)
        {
            sum=1;
            for(j=2;j<=n;j++)
            {
                sum+=j;
                //cout<<sum<<endl;
            }
            n=sum;
            //cout<<"j"<<j<<endl;
        }
        cout<<sum<<endl;
    }


}
