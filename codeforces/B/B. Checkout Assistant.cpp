#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,time,price;
    cin>>n;
    long long a[n+2],miin,maax;
    for (int i=1; i<n+2; i++)
    {
         a[i]=1e18; //maxll
    }
    a[0]=0;
    for (int i=0; i<n; i++)
    {
        cin>>time>>price;
        time++;
        //cout<<"time  "<<time<<endl;
        for (int j=n; j>0; j--)
        {
            //maax=a[max(0,j-time)];
            a[j]=min(a[j],a[max(0,j-time)]+price);
            //cout<<"A of j"<<" "<<a[j]<<" " ;
        }
    }
    cout<<a[n]<<endl;
    return 0;
}
