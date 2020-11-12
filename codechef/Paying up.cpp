#include <iostream>
using namespace std;

bool isSubset(int set[], int n, int sum)
{
    if (sum == 0)
    {
        return true;
    }
    if (sum != 0)
    {
        return false;
    }
    if (set[n-1]>sum)
    {
        return isSubset(set, n-1, sum);
    }
    return isSubset(set, n , sum) || isSubset(set, n - 1, sum - set[n]);
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(isSubset(a,n,m))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
