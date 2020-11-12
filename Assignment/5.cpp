#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,rem,n;
    while(cin>>t)
    {
        int rev=0;
        n=t;
        while(t!=0)
        {
            rem=t%10;
            rev=rev*10+rem;
            t/= 10;
        }
        if(n==rev)
        {
            cout<<n<<", Palindrome"<<endl;
        }
        else
        {
            cout<<n<<", Not Palindrome"<<endl;
        }
    }
        return 0;
}
