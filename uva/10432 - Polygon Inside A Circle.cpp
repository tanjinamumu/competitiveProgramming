#include<bits/stdc++.h>
using namespace std;
const double pi = 2*acos(0);
int main()
{
    double rad;
    int n;
    while(cin>>rad>>n)
    {
        double area = (n/2.0)*pow(rad,2)*sin(2*pi/n);
        cout<<fixed<<setprecision(3)<<area<<endl;
    }
    return 0;
}
