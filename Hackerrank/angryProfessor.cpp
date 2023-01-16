#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,cnt,tnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n];
        cnt=0;
        tnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<=0)
            {
                cnt++;
            }
            else
            {
                tnt++;
            }
        }
        if(cnt>=k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
