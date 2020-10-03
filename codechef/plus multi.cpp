#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,count1=0,count2=0;
        cin>>n;
        int ar;
        for(int i=0; i<n; i++)
        {
            cin>>ar;
            if(ar==2)
                count1++;
            else if(ar==0)
                count2++;
        }
        if(count1<2 && count2<2)
            cout<<0<<endl;
        else
        {
            int m=(count1*(count1-1))/2;
            int n=(count2*(count2-1))/2;
            cout<<(int)(m+n)<<endl;
        }
    }
}
