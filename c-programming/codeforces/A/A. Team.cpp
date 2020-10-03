#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,i,sum=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        if((a+b+c)>=2)
        {
            sum++;
        }
    }
    cout<<sum;
}
