
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j=0,sum=0,p=0;
    cin>>n;
    long long a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a+1,a+1+n);
    /*for(i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }*/
    i=n;
    //cout<<i<<endl;
    while(sum/2+1>p)
    {
        p+=a[i];
       //cout<<p<<endl;
        j++;
        //cout<<j<<endl;
        i--;
        //cout<<i<<endl;
    }
    cout<<j<<endl;
}
