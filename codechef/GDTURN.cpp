#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,sum;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    sum=x+y;
	    if(sum>6)
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
