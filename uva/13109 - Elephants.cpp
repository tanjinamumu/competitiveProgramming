#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,w,m,i,x,sum,sum1;
    cin>>t;
    while(t--)
    {
        vector<long long>v;
        cin>>m>>w;
        for(i=0; i<m; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        sum=0;
        sum1=0;
        for(i=0;i<m;i++)
        {
            sum1+=v[i];
            //cout<<"SUM1"<<" "<<sum1<<" ";
            if(sum1<=w)
            {
                sum++;
                //cout<<"SUM"<<" "<<sum<<" ";
            }
            else
            {
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
