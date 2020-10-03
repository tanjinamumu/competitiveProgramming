#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,i,a[5],sum,p;
    cin>>tc;
    while(tc--)
    {
        sum=0;
        for(i=0;i<5;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cin>>p;
        if(p*sum<=120)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
