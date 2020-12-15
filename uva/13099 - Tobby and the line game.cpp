#include<bits/stdc++.h>
using namespace std;
int main()
{
    double xL, yL, xR, yR;
    while(cin>>xL>>yL>>xR>>yR)
    {
        double x,y,sum;
        x=pow(xL-xR,2);
        y=pow(yL-yR,2);
        sum=(x+y)/6;
        cout<<fixed<<sum<<setprecision(12)<<endl;
    }
}
