#include <bits/stdc++.h>
using namespace std;

bool compare(char a, char b);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end(),compare);
        do
        {
            cout<<s<<endl;
        }
        while(next_permutation(s.begin(),s.end(),compare));
    }
}

bool compare(char a, char b)
{
    if(tolower(a)==tolower(b))
    {
        return a<b;
    }
    else
    {
        return tolower(a)<tolower(b);
    }
}
