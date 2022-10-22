#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,n,m,p;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    n=x%y;
	    m=x/y;
	    p=n+m;
	    cout<<p<<endl;
	    
	}
	return 0;
}
