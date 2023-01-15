#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if((a*b<0)||(a*c<0)||(b*c<0))
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
