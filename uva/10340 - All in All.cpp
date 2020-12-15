#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,sizeofs,sizeoft,c,n;
    string s,t;
    while(cin>>s>>t)
    {
        c=0;
        sizeofs=s.size();
        sizeoft=t.size();
        n=0;
        for(i=0; i<sizeofs; i++)
        {
            for(j=n; j<sizeoft; j++)
            {
                if(s[i]==t[i+j])
                {
                    c++;
                    n=j;
                    break;
                }
            }
        }
        if(c==sizeofs)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
