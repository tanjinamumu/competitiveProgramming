#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n<=70)
	    {
	        cout<<"0"<<endl;
	    }
	    else if(n>70 && n<=100)
	    {
	        cout<<"500"<<endl;
	    }
	    else if(n>100)
	    {
	        cout<<"2000"<<endl;
	    }
	}
	return 0;
}
