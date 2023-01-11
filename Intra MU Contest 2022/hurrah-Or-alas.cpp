#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
	int sum=0;
    for(int i=0; i<s.size(); i++)
    {
        sum = sum + s[i];
    }
    if(sum%2==0)
    {
        cout<<"Hurrah!"<<endl;
    }
    else
    {
        cout<<"Alas!"<<endl;
    }
    return 0;
}

