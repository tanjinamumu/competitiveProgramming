#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, W, sum = 0;
    cin>>n>>W; //total items and weight
    int w[n], v[n];
    for(int i=0; i<n; i++)
    {
        cin>>w[i]>>v[i]; //size of items and their weight
        sum += v[i]; //sumj of their weights
    }
    int matrix[sum+1][n+1]; //assigning [sum+1] and total_items[n+1] to matrix
    //matrix started
    for(int i=0; i<=sum; i++)
    {
        for(int j=0; j<=n; j++)
        {
            matrix[i][j] = 1e9; //upto max size.....the number one followed by nine zeros is 1e9
        }
    }
    for(int j=0; j<=n; j++)
    {
         matrix[0][j] = 0;//all index of j of matrix[0][j]=0
    }
    for(int i=1; i<=sum; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i-v[j-1]>=0)//if i-th index is subtracted from weights[j-1] thats greater or equal to 0 then...
            {
               matrix[i][j] = min(matrix[i][j-1], matrix[i-v[j-1]][j-1]+w[j-1]);
               //cout<< matrix[i][j]<<"  ";
            }
            else
            {
                matrix[i][j] = matrix[i][j-1];
            }
        }
    }
    int ans = -1; //assigning ans to -1
    for(int i=0; i<=sum; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(matrix[i][j] <= W)
            {
                ans = max(ans,i);
                //cout<<ans<<" ";
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
