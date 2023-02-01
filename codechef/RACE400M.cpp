#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t,a,b,x,y,c,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(x<y && x<z)
        {
            cout<<"ALICE"<<endl;
        }
        else if(y<x && y<z)
        {
            cout<<"BOB"<<endl;
        }
        else if(z<x && z<y)
        {
            cout<<"CHARLIE"<<endl;
        }

    }
    return 0;
}
