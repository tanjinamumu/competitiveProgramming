//factorial of big integer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int i,fac=0,j,carry=0,sum[1000]= {1};
        cin>>n;
        for(i=1; i<=n; i++)
        {
            for(j=0; j<=fac; j++)
            {
                sum[j]=sum[j]*i+carry;
                carry=sum[j]/10;
                sum[j]=sum[j]%10;
            }
            while(carry)
            {
                fac++;
                sum[fac]=carry%10;
                carry/=10;
            }
        }
        for(i=fac; i>=0; i--)
        {
            cout<<sum[i];
        }
        cout<<endl;
    }
}
