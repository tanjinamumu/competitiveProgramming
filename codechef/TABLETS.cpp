#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,c;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    c=y/x;
	    if(c>=3)
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
