#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>a>>x>>y;
	    if((x*y)>=a)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
