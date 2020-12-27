#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j;
    string s;
    while(cin>>s)
    {
        long long dec=0,power,m;
        n=s.size();
        for(i=0; i<n; i++)
        {
            m=s[i]-'0';
            power=pow(2,n-i)-1;
            dec+=m*power;
        }
        if(dec==0)
        {
            break;
        }
        cout<<dec<<endl;
    }
    return 0;
}

