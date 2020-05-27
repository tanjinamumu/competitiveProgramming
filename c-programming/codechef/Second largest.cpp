#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for( int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        int n = sizeof(a) / sizeof(a[0]);
        sort(a, a + n);
        cout<<a[1]<<endl;
    }
    return 0;
}

