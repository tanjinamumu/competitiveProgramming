#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d,x,e,f;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>x;
	    d=a+b;
	    e=a+c;
	    f=b+c;
	    if(d>=x || e>=x || f>=x)
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
