#include<bits/stdc++.h>
#define func1(x,y,z)    (28-2*y+6*z)/20
#define func2(x,y,z)   (-23-x-9*z)/20
#define func3(x,y,z)  (57+2*x-7*y)/20
using namespace std;
int main()
{
    float x,y,z,x1, y1, z1, diff1, diff2, diff3, diff=0;
    int cnt=1;
    cout<< setprecision(6)<< fixed;
    cout<<"Enter the initial value of x: ";
    cin>>x;
    cout<<"Enter the initial value of y: ";
    cin>>y;
    cout<<"Enter the initial value of z: ";
    cin>>z;
    cout<<"Gauss Jacobi Method starts from here : "<< endl;
    cout<<endl<<"Count\t    x\t \t    y \t \t    z"<<endl;
    do
    {
        x1 = func1(x,y,z);
        y1 = func2(x,y,z);
        z1 = func3(x,y,z);
        cout<<cnt<<"\t"<< x1<<"\t"<< y1<<"\t"<< z1<<endl;
        diff1 = fabs(x-x1);
        diff2 = fabs(y-y1);
        diff3 = fabs(z-z1);
        cnt++;
        x = x1;
        y = y1;
        z = z1;
    }
    while(diff1>diff && diff2>diff && diff3>diff);
    cout<< endl<<"Values of x,y and z are : "<<"x ="<<" "<< x1<<" y= "<< y1<<"and z = "<< z1<<endl<<endl;
    return 0;
}
