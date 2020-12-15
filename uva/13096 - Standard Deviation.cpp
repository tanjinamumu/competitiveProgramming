#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    while(cin>>n&&n!=0)
    {
        double sum =sqrt((n*n+n)/3.0);
        cout<<fixed<<sum<<setprecision(6)<<endl;
    }
}
