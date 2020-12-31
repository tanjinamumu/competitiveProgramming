#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n;
    int count1=0,count2=0,count3=0,count4=0;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        if(s==1)
        {
            count1++;
        }
        if(s==2)
        {
            count2++;
        }
        if(s==3)
        {
            count3++;
        }
        if(s==4)
        {
            count4++;
        }
    }
    int ans=count4+count3+count2/2;
    count1-=count3;
    count2%=2;
    ans+=count2;
    count1-=2*count2;
    if(count1>0)
    {
        ans+=count1/4;
        count1%=4;
        if(count1)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
