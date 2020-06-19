#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,n,i,sum;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        long long d=0;
        while(a<=n && b<=n)
        {
            if(a<b)
            {
                a+=b;
                //cout<<"21"<<" "<<a<<endl;
            }
            else
            {

                b+=a;
                //cout<<"16"<<" "<<b<<endl;
            }
            d++;
            //cout<<"24"<<" "<<d<<endl;
        }
        cout<<d<<endl;



    }


}
