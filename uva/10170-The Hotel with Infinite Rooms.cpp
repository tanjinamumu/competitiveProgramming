#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,d,sum=0;
    while(cin>>s>>d)
    {
        long long i=s;
        sum=0;
        while(1)
        {
            sum += i;
            if(sum >= d)
            {
                cout<<i<<endl;
                break;
            }
            i++;
        }
    }
    return 0;
}
