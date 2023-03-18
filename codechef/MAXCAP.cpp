#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,s;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    s=x*y;
	    if(x<=8 && s<=500)
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
