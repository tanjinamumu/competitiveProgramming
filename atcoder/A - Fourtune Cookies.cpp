#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,sum1,sum2;
    cin>>a>>b>>c>>d;
    if(((a+b)==(c+d))||((a+c)==(b+d))||((a+d)==(b+c))||((a+b+c)==d)||((b+c+d)==a)||((c+d+a)==b)||(a+b+d)==c)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
