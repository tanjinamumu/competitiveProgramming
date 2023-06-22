#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,x,y,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    long long cnt=1;
	    while(y<x)
	    {
	        y+=cnt;
	        cnt++;
	    }
	    cout<<cnt-1<<endl;
	}
	return 0;
}
