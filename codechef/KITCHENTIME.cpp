#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,ans; 
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    ans= abs(x-y);
	    cout<<ans<<endl;
	}
	return 0;
}
