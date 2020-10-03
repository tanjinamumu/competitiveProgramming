#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,round,rounding;
    cin>>n;
    round=(n/10)*10;
    rounding=round+10;
    if((n-round)>(rounding-n))
    {
        cout<<rounding<<endl;
    }
    else
    {
        cout<<round<<endl;
    }
}
