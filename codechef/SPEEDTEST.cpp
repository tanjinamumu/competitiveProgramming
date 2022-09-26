#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	float a,b,x,y,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>x>>b>>y;
	    c=a/x;
	    d=b/y;
	    if(c==d)
	    {
	        cout<<"Equal"<<endl;
	    }
	    else if(c>d)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else 
	    {
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
