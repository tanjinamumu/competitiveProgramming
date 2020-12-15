#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int countt=1; countt<=t; countt++)
    {
        int n,high=0,low=0,num,point=0,sum=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>num;
            if(i==0)
            {
                point=num;
            }
            else
            {

                if(num>point)
                {
                    high++;
                    //cout<<high<<" ok1  ";
                    point=num;
                }
                if(num<point)
                {
                    low++;
                    //cout<<low<<" ok2  ";
                    point=num;
                }
            }
        }
        cout<<"Case"<<" "<<countt<<":"<<" "<<high<<" "<<low<<endl;
    }
}

