#include <iostream>
using namespace std;

int main()
{
    int t,n,s=0,d=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            s++;
        }
        else
        {
            d++;
        }
    }
    if(s>d)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else if(d>=s)
    {
        cout<<"NOT READY"<<endl;
    }



}
