#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int m,o;
    cin>>m>>o;
    while(m != o) 
    {
      if(m > o)
      {
        m -= o;
      }
      else
      {
        o -= m;
      }
    }

    cout<<m<<endl;
  }
  return 0;
}