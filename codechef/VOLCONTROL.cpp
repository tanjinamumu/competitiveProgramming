#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x>y)
	    {
	        cout<<x-y<<endl;
	    }
	    else
	    {
	        cout<<y-x<<endl;
	    }
	}
	return 0;
}
