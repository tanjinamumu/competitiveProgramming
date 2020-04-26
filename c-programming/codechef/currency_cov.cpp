#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n,i,dum;
        double sum;
        string s;
		cin>>n;
        cin>>s;
		if(s=="POUNDS")
		{
			sum=n*0.84;
			cout<<"$"<<n<<" "<<"CONVERTS TO"<<" "<<setprecision(5)<<sum<<" "<<"POUNDS"<<endl;
		}
		else if(s=="LIRA")
		{
			dum=n*2040;
			cout<<"$"<<n<<" "<<"CONVERTS TO"<<" "<<dum<<" "<<"LIRA"<<endl;

		}
		else if(s=="FRANCS")
		{
			sum=n*9.85;
			cout<<"$"<<n<<" "<<"CONVERTS TO"<<" "<<setprecision(5)<<sum<<" "<<"FRANCS"<<endl;

		}
		else if(s=="MARKS")
		{
			sum=n*3.23;
			cout<<"$"<<n<<" "<<"CONVERTS TO"<<" "<<setprecision(5)<<sum<<" "<<"MARKS"<<endl;
		}
		else if(s=="YEN")
		{
			dum=n*260;
			cout<<"$"<<n<<" "<<"CONVERTS TO"<<" "<<dum<<" "<<"YEN"<<endl;
		}
	}
	return 0;
}
