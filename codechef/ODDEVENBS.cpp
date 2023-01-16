#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a,cnt;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cnt=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a;
	        if(a==0)
	        {
	            cnt++;
	        }
	    }
	    if(cnt & 1)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	    
	}
	return 0;
}
