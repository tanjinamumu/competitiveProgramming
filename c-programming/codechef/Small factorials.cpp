#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/lexical_cast.hpp>
using namespace std;
using namespace boost::multiprecision;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cpp_int fac=1;
        for(i=1;i<=n;i++)
        {
            fac=fac*i;
        }
        cout<<fac<<endl;
    }
    return 0;
}
