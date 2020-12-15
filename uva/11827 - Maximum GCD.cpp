#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,(a%b));
}

int main()
{
    int t,n,a[100],gcd_count;
    string s;

    cin>>t;
    getline(cin,s);
    while(t--)
    {
        getline(cin,s);
        istringstream ss(s);
        n=0;
        while(ss>>a[n])
        {
            n++;
        }
        gcd_count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                gcd_count= max(gcd_count,gcd(a[i],a[j]));

            }
        }
        cout<<gcd_count<<endl;

    }
    return 0;
}
