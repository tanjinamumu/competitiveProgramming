#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x,y,i;
    cin>>n;
    while(n--)
    {
        cin>>x;
        y=sqrt(x);
        for(i=2; i*i<=y; i++)
        {
            if(y%i==0)
            {
                break;
            }
        }
        puts((i*i>y&&y*y==x&&x>1)?"YES":"NO");
    }
    return 0;
}

