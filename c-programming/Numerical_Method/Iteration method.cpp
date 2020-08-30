#include<bits/stdc++.h>
#define   f(x)   pow(x,3) + pow(x,2) - 1
#define   g(x)   sqrt(1/(x+1))
using namespace std;
int main()
{
    int cnt=1, n;
    float a, func, diff=0;

    cout<< setprecision(7)<< fixed;

    cout<<"Enter initial root: ";
    cin>>a;
    cout<<"Enter maximum iteration: ";
    cin>>n;
    cout<<"Iteration Method starts from here : "<< endl;
    do
    {
        func = g(a);
        cout<<"x-"<< cnt<<":\t f(x) = "<< setw(10)<< func<<" and f(func) = "<< setw(10)<< f(func)<< endl;

        cnt+=1;

        if(cnt>n)
        {

            cout<< endl<<"Root is "<< func<<endl;
            exit(0);
        }

        a = func;

    }
    while( fabs(f(func)) > diff);
    return(0);
}

