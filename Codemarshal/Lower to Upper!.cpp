#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    int t,cnt=0;
    cin>>t;
    while(t--)
    {
        cnt++;
        getline(cin,s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<toupper(s);

    }
}
