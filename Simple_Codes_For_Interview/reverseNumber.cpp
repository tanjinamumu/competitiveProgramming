#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,rev=0,sum;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    cout<<rev<<endl;
}
