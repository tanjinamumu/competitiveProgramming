#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,l,count,nt,tc=0,n;
    while(cin>>a>>l)
    {
        if((a<0)&&(l<0))
        {
            break;
        }
        count=0;
        nt=a;
        tc++;
        while(a<=l)
        {
            count++;
            if(a==1)
            {
                break;
            }
            if(a%2==0)
            {
                a=a/2;
            }
            else
            {
                a=3*a+1;
            }
        }
        cout<<"Case "<<tc<<": "<<"A = "<<nt<<", limit = "<<l<<", number of terms = "<<count<<endl;
    }
    return 0;
}
