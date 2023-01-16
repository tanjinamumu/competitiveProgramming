#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt;
    cin>>n;
    int arr[n], freq[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        freq[i] = -1;
    }
    for(int i=0; i<n; i++)
    {
        cnt = 1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = cnt;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            cout<<freq[i]<<endl;
        }
    }

    return 0;
}
