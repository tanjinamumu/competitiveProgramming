#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x>y)
	    {
	        cout<<"SECOND"<<endl;
	    }
	    else if(y>x)
	    {
	        cout<<"FIRST"<<endl;
	    }
	    else
	    {
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}
