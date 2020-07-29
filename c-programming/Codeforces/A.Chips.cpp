#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,sum=0,a,i,b,rem;
    cin>>n>>m;
    if(n>m)
    {
        cout<<0;
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        sum+=i;
        //cout<<endl<<sum<<"SUM"<<"    "<<endl;
    }
    rem=m%sum;
    //cout<<endl<<rem<<"REM"<<"    ";
    for(i=1; i<=n; i++)
    {
        if(rem>=i)
        {
            rem-=i;
            //cout<<rem<<"REM"<<"   ";
        }
        else
        {
            cout<<rem<<endl;
            break;
        }
    }


    return 0;
}
