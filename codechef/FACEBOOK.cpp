#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long int a[n],b[n],c[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
           c[i]=a[i]+b[i];
        }
        int m=0,s;
        for(int i=0;i<n;i++)
        {
           if(a[m]<a[i])
           {
               m=i;
            }   
            if(a[m]==a[i])
            {
                if(c[i]>c[m])
                {
                    m=i;
                }
            }
        }
        s=m+1;
        cout<<s<<endl;
	}
	return 0;
}
