#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100005];
    while(gets(s))
    {
        int ls=strlen(s);
        for(int i=0;i<ls;i++)
        {
            s[i]=s[i]-7; //shifting each character ASCII Codes by 7 characters down.
        }
        cout<<s<<endl;
    }
    return 0;
}
