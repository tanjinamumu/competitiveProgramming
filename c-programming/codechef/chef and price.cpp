#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc,n,k,i,sum,ne;
	cin>>tc;
	while(tc--)
	{
		cin>>n>>k;
		sum=0;
		int p[n];
		for(i=0;i<n;i++)
		{
			cin>>p[i];
			sum+=p[i];
		}
		//cout<<sum<<endl;
		int sub=0;
		for(i=0;i<n;i++)
        {
			if(p[i]>=k)
			{
				p[i]=k;
				//cout<<p[i]<<" ";
			}
			else
			{
                p[i]=p[i];
			}
			sub+=p[i];
		}
		//cout<<sub<<endl;
		ne=sum-sub;
		cout<<ne<<endl;
	}
	return 0;
}
