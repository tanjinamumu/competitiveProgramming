#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,y1,y2,d,x,y;
    cin>>x1>>x2>>y1>>y2;
    x=x2-x1;
    y=y2-y1;
    d=sqrt(x+y);
    //cout<<d<<endl;
    cout<<setprecision(3)<<d<<endl;
    return 0;
}

/*input
2 5 3 6
ans: 2.45 */
