#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    int t1,t2,r1,r2;
    double sum1,sum2,sum3,sum4,res1,res2;
    cin>>n;
    while(n--)
    {
        cin>>t1>>t2>>r1>>r2;
        sum1=pow(t1,2);
        sum2=pow(t2,2);
        sum3=pow(r1,3);
        sum4=pow(r2,3);
        res1=sum1/sum3;
        res2=sum2/sum4;
        if(res1==res2)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
