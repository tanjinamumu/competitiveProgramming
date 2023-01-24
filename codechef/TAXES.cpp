#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x>100)
	    {
	        cout<<x-10<<endl;
	    }
	    else if(x<=100)
	    {
	        cout<<x<<endl;
	    }
	    
	}
	return 0;
}
