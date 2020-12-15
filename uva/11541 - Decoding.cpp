#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt=0;
    scanf("%d\n",&t);
    while (t--)
    {
        char s;
        int n;
        string ss="";
        while(scanf("%c %d",&s,&n)==2)
        {
            for(int i=0; i<n; i++)
            {
                ss+=s;
            }
        }
        cout<<"Case "<<cnt++<<": " <<ss<<endl;
    }
}
