#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a,b,x,y,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    int a[n];
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>=x)
	        {
	            cnt++;
	        }
	    }
	    if(cnt==0)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        cout<<cnt<<endl;
	    }
	}
	return 0;
}
