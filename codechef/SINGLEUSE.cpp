#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,h,x,y,s,n;
	cin>>t;
	while(t--)
	{
	    cin>>h>>x>>y;
	    h=h-y;
	    if(h%x==0)
	    {
	        s=(1+(h/x));
	        cout<<s<<endl;
	    }
	    else
	    {
	        s=(2+(h/x));
	        cout<<s<<endl;
	    }
	    //cout<<n+s<<endl;
	}
	return 0;
}
