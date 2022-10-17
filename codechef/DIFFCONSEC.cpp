#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    string str;
	    count=0;
	    cin>>str;
	    for(int i=0; i<n; i++)
	    {
	        if(str[i]==str[i-1])
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
