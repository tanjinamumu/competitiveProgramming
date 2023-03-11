#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,c,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    c=a[n-x]-1;
	    cout<<c<<endl;
	}
	return 0;
}
