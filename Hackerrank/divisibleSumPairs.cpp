#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt;
    cin>>n>>k;
    int arr[n];
    cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((arr[i]+arr[j])%k==0)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

