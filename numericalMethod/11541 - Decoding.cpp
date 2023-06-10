#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,ans=1;
    string s = "";
    cin>>t;
    while(t--)
    {
        char ss;
        int n;
        cin>>ss;
        cin>>n;
        for(i = 1; i <=n; i++)
        {
            s += ss;
        }

    }
    cout<<"Case"<<" "<<ans++<<":"<<" "<<s<<endl;
}

