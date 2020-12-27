#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,hour,minute,time;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if((h1==0)&&(m1==0)&&(h2==0)&&(m2==0))
        {
             break;
        }
        hour=h2-h1;
        minute=m2-m1;
        if(minute<0)
        {
            minute+=60;
            hour--;
        }
        if(hour<0)
        {
            hour+=24;
        }
        time=(hour*60)+minute;
        cout<<time<<endl;
    }
    return 0;
}
