#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,x,n,m,c,d;
	cin>>x>>n>>m;
	c=abs(n-m);
	d=c+x;
	if(d>=n)
	{
       cout<<"YES"<<endl;
	}
	else
    {
	   cout<<"NO"<<endl;
	}
	
	return 0;
}
