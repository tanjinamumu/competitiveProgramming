#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector <char> c;
    for (int i = 0; i<s.size(); i++)
    {
        if (s[i] == '1' || s[i] == '2' || s[i] == '3')
        {
            c.push_back(s[i]);
        }
    }
    sort(c.begin(), c.end());
    for (int i = 0; i<c.size()-1; i++)
    {
        cout << c[i] << "+";
    }
    cout << c[c.size()-1] << endl;
}
