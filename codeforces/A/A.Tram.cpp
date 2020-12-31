#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,t,sum;
    cin>>t;
    {
        n=0;
        sum=0;
        for(int i=0; i<t; i++)
        {
            cin>>a>>b;
            n-=a;
            n+=b;
            if(n>sum)
            {
                sum=n;
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}
