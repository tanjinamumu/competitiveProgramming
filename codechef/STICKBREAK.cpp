#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,k,l;
	cin>>t;
	while(t--)
	{
	    cin>>k>>l;
	    if(k%l)
	    {
	        cout<<"1"<<endl;
	    }
	    else 
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
