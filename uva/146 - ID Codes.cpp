#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        if(s.compare("#")==0)
        {
            break;
        }
        else if(next_permutation(s.begin(),s.end()))
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<"No Successor"<<endl;
        }
    }
    return 0;
}
