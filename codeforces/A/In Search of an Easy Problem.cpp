#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       int c;
       cin>>c;
       if(c==1)
       {
     	  a++;
       }
       else
       {
       	b++;
       }
    }
    if(a>=1)
    {
    	cout<<"HARD"<<endl;
    }
    else
    {
    	cout<<"EASY"<<endl;
    }
    a=0;b=0;
    return 0;
}
