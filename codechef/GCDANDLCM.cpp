#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n1,n2,temp,t,a,b,gcd,lcm;
    cin>>t;
    while(t--)
    {
        cin>>n1>>n2;
        a = n1;
        b = n2;
        while(b!= 0)
        {
            temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
        lcm = (n1*n2)/gcd;
        cout<<gcd<<" "<<lcm<<endl;
    }
}


