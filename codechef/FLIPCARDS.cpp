#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    y=n-x;
	    cout<<min(x,y)<<endl;
	}
	return 0;
}
