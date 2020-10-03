#include<bits/stdc++.h>
using namespace std;
int w[2004];
int v[2004];
int matrix[2002][2002];

int knapsack(int n, int num)
{
    for(int i= 0; i<=n; i++)
    {
        for(int j= 0; j<=num; j++)
        {
            if(i == 0 || j== 0)
                matrix[i][j]= 0;
            else if(w[i-1] <= j)
                matrix[i][j]= max(v[i-1]+matrix[i-1][j-w[i-1]], matrix[i-1][j]);
            else
                matrix[i][j]= matrix[i-1][j];
        }
    }
    return matrix[n][num];
}


int main()
{
    int n, s;
    cin>>s>>n;
    for(int i= 0; i<n; i++)
    {
        cin>>w[i]>>v[i];
    }
    cout<< knapsack(n, s) <<endl;
    return 0;
}
