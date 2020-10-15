#include<bits/stdc++.h>
using namespace std;
long long int i,j,n,w,a[101],b[101],matrix[101][100001],ans;

int main()
{
    cin>>n>>w; //number of items and weight/values
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i]; //inputing all the items's size and values
    }
    //matrix..2D array started
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=w; j++)
        {
            if(a[i]<=j) //weight of 1st item is less or equal to the 2nd loop's index which will circulate upto given weight.
            {
                //max of ((matrix[i-1] and matrix[j-a[i]+b[i]),matrix[i-1][j])
                matrix[i][j]=max(matrix[i-1][j-a[i]]+b[i],matrix[i-1][j]);
            }
            else
            {
                matrix[i][j]=matrix[i-1][j];
            }
        }
    }
    for(i=1; i<=w; i++)
    {
        ans=max(ans,matrix[n][i]);
    }
    cout<<ans<<endl;
}

