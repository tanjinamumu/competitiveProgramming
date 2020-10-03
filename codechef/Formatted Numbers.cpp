#include<bits/stdc++.h>
using namespace std;

int  main()
{

    int n,f,s,t;
    cin>>n;
   {
       f=n%1000;

        n = n/1000;

        s=n%1000;

        n=n/1000;

        t=n%1000000;
        cout<<t<<","<<s<<","<<f<<endl;
   }
   return 0;
}
