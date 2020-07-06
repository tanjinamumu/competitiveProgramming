#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,c=0,c1=0,c2=0,c3=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		string s="";
		cin>>s;
		if(s=="AC")
		{
			c++;
		}
		else if(s=="WA")
		{
			c1++;
		}
		else if(s=="TLE")
		{
			c2++;
		}
		else if(s=="RE")
		{
			c3++;
		}
	}
	cout<<"AC"<<" "<<"x"<<" "<<c<<endl;
	cout<<"WA"<<" "<<"x"<<" "<<c1<<endl;
	cout<<"TLE"<<" "<<"x"<<" "<<c2<<endl;
	cout<<"RE"<<" "<<"x"<<" "<<c3<<endl;
	return 0;
}
