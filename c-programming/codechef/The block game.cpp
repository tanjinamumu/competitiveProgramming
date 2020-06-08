#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int rev=0, rem,temp;
        cin>>n;
        temp=n;
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        if(rev==n)
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"losses"<<endl;
        }
    }
    return 0;
}
