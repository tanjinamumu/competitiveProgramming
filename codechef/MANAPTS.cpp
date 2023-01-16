#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,c;
	cin>>t;
	while(t--)
    {
	    cin>>x>>y;
	    if(x<=y)
	    {
	        c=y/x;
	        cout<<c<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	    
	}
	return 0;
}
