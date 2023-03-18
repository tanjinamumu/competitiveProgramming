#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,x,y,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    x=((100*a)/100);
	    y=((200*b)/100);
	    c=100-x;
	    d=200-y;
	    if(c<d)
	    {
	        cout<<"FIRST"<<endl;
	    }
	    else if(d<c)
	    {
	        cout<<"SECOND"<<endl;
	    }
	    else
	    {
	        cout<<"BOTH"<<endl;
	    }
	}
	return 0;
}
