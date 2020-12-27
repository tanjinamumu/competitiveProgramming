#include<bits/stdc++.h>
using namespace std;
int main()
{
    double v,volume;
    int l,f;
    while(cin>>l>>f)
    {
        if(l==0&&f==0)
        {
            break;
        }
        else
        {
            v=sqrt(l*f*2);
            volume=((v*3600)/(l+v*v/2/f));
            cout<<fixed<<setprecision(8)<<v<<" "<<setprecision(8)<<volume<<endl;
        }
    }

}
