#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long tc,sum=0,i;
	double avg;
	cin>>tc;
	int n[tc];
	for(i=0;i<tc;i++)
	{	cin>>n[i];
		sum+=n[i];
		avg=(double)sum/(i+1);
		cout<< setprecision(11)<<avg<<endl;
	}
	return 0;
}
