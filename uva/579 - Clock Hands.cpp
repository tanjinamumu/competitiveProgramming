#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;
    char s;
    while(cin>>h>>s>>m)
    {
        float angle_h=h*30.0+(m/60.0)*30.0;
        //cout<<angle_h<<" ";
        float angle_m=m*6.0;
        //cout<<angle_m<<" ok1 ";
        float angle=abs(angle_h-angle_m);
        //cout<<angle<<" ok2 "<<endl;
        if(h==0.0&&m==0.0)
        {
            break;
        }
        if(angle<0)
        {
            angle*=-1;
            //cout<<angle<<" ok3 "<<endl;
        }
        if(angle>180.0)
        {
            angle=abs(360.0-angle);
           // cout<<angle<<" ok4 "<<endl;
        }
        cout<<fixed<<setprecision(3)<<angle<<endl;
    }


}
