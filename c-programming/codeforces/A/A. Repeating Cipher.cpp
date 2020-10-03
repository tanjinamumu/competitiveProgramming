#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=1,i=0;
    string t;
    cin>>n;
    cin>>t;
    while(i<n)
    {
        cout<<t[i];
        i+=sum;
        sum++;
    }
    cout<<endl;
}
