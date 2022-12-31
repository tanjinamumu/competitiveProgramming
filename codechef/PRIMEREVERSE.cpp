#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    int s1=0;
	    int s2=0;
	    for(i=0;i<n;i++)
	    {
	        
	        if(a[i]=='1')
	        {
	            s1+=1;
	        }
	        if(b[i]=='1')
	        {
	            s2+=1;
	        }
	    }
	    if(s1==s2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
