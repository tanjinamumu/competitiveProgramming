#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int count=0;
        for(int i=0;i<5;i++)
        {
            int n;
            cin>>n;
            if(t==n)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
