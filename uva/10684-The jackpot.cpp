#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    while(cin>>t&&t!=0)
    {
        int sum=0,max=-1;
        for(int i=0;i<t;i++)
        {
            cin>>n;
            sum+=n;
            if(sum>max)
            {
                max=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        if(max>0)
        {
            cout<<"The maximum winning streak is "<<max<<"."<<endl;
        }
        else
        {
            cout<<"Losing streak."<<endl;
        }
    }
}
