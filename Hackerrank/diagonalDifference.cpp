#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int dif1 = 0, dif2 = 0;
    for (int i=0;i<n; i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
            {
                dif1+=arr[i][j];
            }

            if (i==n-j-1)
            {
                dif2+=arr[i][j];
            }
        }
    }
    cout<<abs(dif1-dif2)<<endl;
    return 0;
}

