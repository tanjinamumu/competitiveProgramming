#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string t,s;
    cin>>t>>s;
    reverse(t.begin(),t.end());
    //cout<<t<<endl;
    if(t==s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
