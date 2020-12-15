#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, sub;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 && d==0)
        {
            break;
        }
        int degree=1080; //360*3=1080
        if(a<b)
        {
            sub=(a-b);
           // cout<<"1sub: "<<sub<<endl;
            degree+=(40+sub)*9; // 40 calibration marks    360/40=9 degree
           // cout<<"1degree: "<<degree<<endl;
        }
        else
        {
            sub=(a-b);
           // cout<<"2sub: "<<sub<<endl;
            degree+=sub*9;
          //  cout<<"2degree: "<<degree<<endl;
        }
        if(b>c)
        {
            sub=(c-b);
           // cout<<"3sub: "<<sub<<endl;
            degree+=(40+sub)*9;
           // cout<<"3degree: "<<degree<<endl;
        }
        else
        {
            sub=(c-b);
          //  cout<<"4sub: "<<sub<<endl;
            degree+=sub*9;
          //  cout<<"4degree: "<<degree<<endl;
        }
        if(c<d)
        {
            sub=(c-d);
           // cout<<"5sub: "<<sub<<endl;
            degree+=(40+sub)*9;
           // cout<<"5degree: "<<degree<<endl;
        }
        else
        {
            sub=(c-d);
           // cout<<"6sub: "<<sub<<endl;
            degree+=sub*9;
           // cout<<"6degree: "<<degree<<endl;
        }
        cout<<degree<<endl;
    }
}
