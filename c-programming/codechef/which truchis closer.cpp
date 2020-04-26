#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc,A,B;
	cin>>tc;
	int x1,y1,x2,y2;
	while(tc--)
	{
	    cin>>x1>>y1>>x2>>y2;
	    A=abs(x1)+abs(y1);
	    B=abs(x2)+abs(y2);
	    if(A<B)
        {
            cout<<"A IS CLOSER"<<endl;
        }
	    else
	    {
            cout<<"B IS CLOSER"<<endl;
	    }
	}
	return 0;
}

