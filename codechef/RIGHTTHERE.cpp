#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x<y || x==y)
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
