#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if((a<b)&&(b-a)>=2)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
}
