#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc,n,i;
	cin>>tc;
	for(i=0;i<tc;i++)
	{
	    int sum=0,rem;
	    cin>>n;
	    while(n!=0)
	    {
	       rem=n%10;
	       sum+=rem;
	       n=n/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}


