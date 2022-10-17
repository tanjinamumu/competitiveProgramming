#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d,e,f;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    d=a+b;
	    e=b+c;
	    f=c+a;
	    if((d%2!=0)||(e%2!=0)||(f%2!=0))
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
