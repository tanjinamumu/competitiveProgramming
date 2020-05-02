#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin>>tc;
    long long po[tc];
    for(int i=0; i < tc; ++i)
    {
        cin>>po[i];
    }
    sort(po,po+tc);
    long long maax=0;
    for(int i=0; i < tc; ++i)
    {
        maax = max(maax,po[i]*(tc-i));
    }
    cout<<maax<<endl;
}

/*for first testcase
4
14
20
30
53
maax = max(maax,po[i]*(tc-i));
   = max(0,14*(4-0));
   = (0,56)
   = 56
maax = max(maax,po[i]*(tc-i));
   = max(56,20*(4-1));
   = (56,60)
   = 60
maax = max(maax,po[i]*(tc-i));
   = max(60,30*(4-2));
   = (60,60)
   = 60
maax = max(maax,po[i]*(tc-i));
   = max(60,53*(4-3));
   = (60,53)
   = 60
   */
