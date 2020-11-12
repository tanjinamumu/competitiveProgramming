#include<bits/stdc++.h>
using namespace std;
int subset_sum(int arr[],int x,int n)
{
    if(x==0)
    {
        return 1;
    }
    if(n==0 && x!=0)
    {
        return 0;
    }
    if(arr[n-1]>x)
    {
        return subset_sum(arr,x,n-1);
    }

    return subset_sum(arr,x-arr[n-1],n-1) || subset_sum(arr,x,n-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(subset_sum(arr,m,n))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
