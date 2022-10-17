#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,n,s,p;
	cin>>t;
	while(t--)
	{
	   cin>>n>>s;
	   if(n>=s)
	   {
	       cout<<s<<endl;
	   }
	   else
	   {
	       p = s-n;
	       cout<<abs(p-n)<<endl;
	   }
	}
	return 0;
}
