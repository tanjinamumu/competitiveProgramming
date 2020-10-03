#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int sl=s.size();
    //cout<<sl<<endl;
    int tl=t.size();
    //cout<<tl<<endl;
    t.pop_back();
    //cout<<t<<endl;
    if(s == t)
    {
        cout << "Yes" << endl;
    }
    else
    {
       cout << "No" << endl;
    }
    return 0;
}
