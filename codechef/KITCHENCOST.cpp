#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }   
	    for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    int sum=0;
	    for(i=0;i<n;i++)
	    {
	        if(x<=a[i])
	        {
	            sum+=b[i];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
