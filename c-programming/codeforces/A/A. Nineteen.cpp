#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cntn=0,cnti=0,cnte=0,cntt=0;
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'n')
        {
            cntn++;
        }
        if(s[i] == 'i')
        {
            cnti++;
        }
        if(s[i] == 'e')
        {
            cnte++;
        }
        if(s[i] == 't')
        {
            cntt++;
        }
    }
    int cnt = min((min((cnti), (cntt))),(min(((cntn- 1)/2), (cnte/3))));
    cout<<cnt<<endl;
}

