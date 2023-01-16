#include <bits/stdc++.h>
using namespace std;

int difference(int arr[100][100], int n)
{
    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                d1 += arr[i][j];
            }

            if (i == n - j - 1)
            {
                d2 += arr[i][j];
            }
        }
    }
    return abs(d1 - d2);
}

int main()
{
    int n;
    cin>>n;
    int arr[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout << difference(arr, n);
    return 0;
}

