#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	long long int a,b,x;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>x;
	    if((b-a)%(x*2)==0)
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
