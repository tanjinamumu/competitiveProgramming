#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    if(y%x==0)
	    {
	        if(n>=y/x)
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
