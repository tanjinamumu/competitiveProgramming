#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d,e;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    d=max(a,b);
	    d=max(c,d);
	    e=min(a,b);
	    e=min(c,e);
	    cout<<d-e<<endl;
	    
	}
	return 0;
}
