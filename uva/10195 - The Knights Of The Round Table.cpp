#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,r;
    while(cin>>a>>b>>c)
    {
        s =((a+b+c)/2);
        r =sqrt((s-a)*(s-b)*(s-c)/s);
        if((a==0)||(b==0)||(c==0))
        {
            s = 1;
            r = 0;
        }
        cout<<"The radius of the round table is: "<<fixed<<setprecision(3)<<r<<endl;
    }
    return 0;
}
