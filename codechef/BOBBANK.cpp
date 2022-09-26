#include <iostream>
using namespace std;

int main() 
{
    int t;
    long int w,x,y,z,result;
    cin>>t;
    while(t--)
    {
        cin>>w>>x>>y>>z;
        if(x>=y)
        {
            result = w + ((x-y) * z);
        }
        else
        {
            result = w - ((y-x) * z);
        }
        cout<<result<<endl;
    }
	return 0;
}
