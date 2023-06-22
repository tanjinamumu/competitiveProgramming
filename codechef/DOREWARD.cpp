#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x<=3)
	    {
	        cout<<"BRONZE"<<endl;
	    }
	    else if(x>3 && x<=6)
	    {
	        cout<<"SILVER"<<endl;
	    }
	    else if(x>6)
	    {
	        cout<<"GOLD"<<endl;
	    }
	}
	return 0;
}
