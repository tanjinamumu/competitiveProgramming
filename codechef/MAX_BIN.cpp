#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	long long int x,y;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    cin>>s;
	    if(s[0]=='0')
	    {
	        s[0]='1';
	        y--;
	    }
	    while(y>0)
	    {
	        s+='0';
	        y--;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
