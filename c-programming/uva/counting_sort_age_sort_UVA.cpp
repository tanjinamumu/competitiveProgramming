#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int n,i,val;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                cin>>val;
                a.push_back(val);
            }
            sort(a.begin(),a.end());
            for(i=0;i<n-1;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<a[n-1];
            cout<<endl;
        }
        a.clear();
    }
    return 0;
}
