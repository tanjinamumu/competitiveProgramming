#include<bits/stdc++.h>
using namespace std;
int main()
{
      int a[110],count;
      int n,i;
      while(cin>>n)
      {
          if(n==0)
          {
              break;
          }
          i=0;
          while(n>0)
          {
               a[i]=n%2;
               i++;
               n=n/2;
          }
          count=0;
          cout<<"The parity of ";
          for(int j=i-1;j>=0;j--)
          {
                cout<<a[j];
                if(a[j]==1)
                {
                  count=count+1;
                }
          }
          cout<<" is "<<count<<" (mod 2)."<<endl;
      }
 }
