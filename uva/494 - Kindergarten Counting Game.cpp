#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l,cnt;
    while(gets(s))
    {
        l=strlen(s);
        cnt=0;
        for(int i=0;i<l;i++)
        {
            if((isalpha(s[i]))&&(!isalpha(s[i+1])))
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
