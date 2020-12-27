#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sides;
    int count=0;
    while(cin>>n&&n!=0)
    {
        count++;
        sides = ceil((3+sqrt(9+8*n))/2); //diagonal formula
        cout<<"Case "<<count<<": "<<sides<<endl;
    }
    return 0;
}
