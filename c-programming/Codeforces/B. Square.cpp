#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long a1,b1,a2,b2,A,B;
        cin>>a1>>b1>>a2>>b2;
        A=max(a1,b1);
        //cout<<l<<endl;
        B=max(a2,b2);
        //cout<<b<<endl;
        //nt m=a1+b1-A+a2+b2-B;
        //cout<<m<<endl;
        if(A==B)
        {
            if(a1+b1-A+a2+b2-B==A)
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
