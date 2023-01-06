#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	float a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    d=a+b;
	    if(d==c)
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
