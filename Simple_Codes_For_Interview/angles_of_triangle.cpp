#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,angleA,angleB,angleC;
    cin>>a>>b>>c;
    angleA=((acos((b*b)+(c*c)-(a*a))/(2*b*c))*(180/3.1416));
    angleB=((acos((a*a)+(c*c)-(b*b))/(2*a*c))*(180/3.1416));
    angleC=((acos((a*a)+(b*b)-(c*c))/(2*a*b))*(180/3.1416));
    cout<<angleA<<" "<<angleB<<" "<<angleC<<endl;
}
