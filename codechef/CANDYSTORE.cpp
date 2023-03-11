#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,x,y,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x>y)
	    {
	        cout<<y<<endl;
	    }
	    else if(x==y)
	    {
	        cout<<y<<endl;
	    }
	    else if(x<y)
	    {
	        c=y-x;
	        d=x+(c*2);
	        cout<<d<<endl;
	    }
	}
	return 0;
}
