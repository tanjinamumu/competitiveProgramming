#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,m,n,carry,cnt,sum,sum1;
    while(cin>>a>>b)
    {
        if((a==0)&&(b==0))
        {
            break ;
        }
        m=0;
        n=0;
        cnt=0;
        carry=0;
        for(i=0;;i++)
        {
            if(a==0&&b==0)
            {
                break;
            }
            m=a%10;
            a=a/10;
            n=b%10;
            b=b/10;
            sum1=n+m;
            sum=sum1+carry;
            if(sum>9)
            {
                cnt++;
                carry=1;
            }
            else
            {
                carry=0;
            }
        }
        if(cnt==1)
        {
            cout<<cnt<<" carry operation."<<endl;
        }
        else if(cnt>1)
        {
            cout<<cnt<<" carry operations."<<endl;
        }
        else if(cnt==0)
        {
            cout<<"No carry operation."<<endl;
        }
    }
    return 0;
}
