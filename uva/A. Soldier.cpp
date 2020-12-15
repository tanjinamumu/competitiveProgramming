#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,w,n ;
    int sum = 0;
    cin>>k>>w>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        sum+=(k*i) ;
    }
    if(sum<=w)
    {
        cout<<"0"<<endl;
    }
    else
    {
        int dollar=sum-w;
        cout<<dollar<<endl;
    }
    return 0 ;
}


