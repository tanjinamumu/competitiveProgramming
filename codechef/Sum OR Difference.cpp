#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,sum;
    cin>>n1;
    cin>>n2;
    //first number is greater than the second number
    if(n1>n2)
    {
        sum=n1-n2;
        cout<<sum<<endl;
    }
    else
    {
        sum=n1+n2;
        cout<<sum<<endl;
    }
}
