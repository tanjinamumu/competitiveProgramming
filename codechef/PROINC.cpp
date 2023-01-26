#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,x,y,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    c=((x*10)/100);
	    a=x-y;
	    d=x+c;
	    b=d-a;
	    cout<<b<<endl;
	}
	return 0;
}
