//Find a real root of the equation f(x) = 2x^3 − 3x − 6 = 0

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n=20;
    float a,b,x,y;
    a=1;
    b=2;
    for (i=1; i<n; i++)
    {
        x=(a+b)/2;
        y=(2*(pow(x, 3)))-(3*x)-6;
        if (y==0)
        {
            cout<<"The root is x"<<" "<<i<<" "<<"="<<" "<<x<<endl;
        }
        else if(y>0)
        {
            a=a;
            b=x;
            cout<<"The root is x"<<" "<<i<<" "<<"="<<" "<<x<<endl;
        }
        else
        {
            a=x;
            b=b;
            cout<<"The root is x"<<" "<<i<<" "<<"="<<" "<<x<<endl;
        }
    }
    return 0;
}
