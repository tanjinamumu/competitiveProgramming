#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,sum,rem,tem;
    cin>>t;
    while(t--)
    {
        cin>>n;
        rem=n%10; //lasr digit
        tem=n; //first digit
        while(n>=10)
        {
            n=n/10;
        }
        tem=n;
        sum = tem + rem;
        cout<<sum<<endl;
    }
    return 0;
}
