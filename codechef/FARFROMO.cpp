#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	double x1,x2,y1,y2,c,d;
	cin>>t;
	while(t-->0)
	{
	    cin>>x1>>y1>>x2>>y2;
	    c=sqrt((x1*x1)+(y1*y1));
	    d=sqrt((x2*x2)+(y2*y2));
	    if(c>d)
	    {
	        cout<<"ALEX"<<endl;
	    }
	    else if(c<d)
	    {
	        cout<<"BOB"<<endl;
	    }
	    else
	    {
	        cout<<"EQUAL"<<endl;
	    }
	}
	return 0;
}
