#include<bits/stdc++.h>
#define    f(x)    3*x - cos(x) -1
#define   g(x)   3 + sin(x)
using namespace std;
int main()
{
    float a, b, func0, func1, gfunc, diff=0;
    int cnt = 1, n;
    cout<< setprecision(6)<< fixed;
    cout<<"Enter initial root: ";
    cin>>a;
    cout<<"Enter maximum iteration: ";
    cin>>n;
    cout<<"Newton Raphson Method starts from here : "<< endl;
    do
    {
        gfunc = g(a);
        func0 = f(a);
        if(gfunc == 0.0)
        {
            cout<<"Error.";
            exit(0);
        }
        b = a - func0/gfunc;
        cout<<"X-"<< cnt<<":\t x = "<< setw(10)<< b<<" and f(x) = "<< setw(10)<< f(b)<< endl;
        a = b;
        cnt+=1;
        if(cnt > n)
        {
            cout<< endl<<"Root is: "<< b<<endl;
            exit(0);
        }
        func1 = f(b);
    }
    while(fabs(func1)>diff);
    return 0;
}

