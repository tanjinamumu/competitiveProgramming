#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,sum,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    sum=a+b+c;
	    d=sum/3;
	    if(d!=1)
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
