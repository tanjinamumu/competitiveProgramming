#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n,c,rem;
    cin>>t;
    for(i=0; i<t; i++)
    {
        c=0;
        cin>>n;
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
            if(rem==4)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }

}
