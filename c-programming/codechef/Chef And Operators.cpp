#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,a,b;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<">"<<endl;
        }
        else if(a<b)
        {
            cout<<"<"<<endl;
        }
        else if(a==b)
        {
            cout<<"="<<endl;
        }
    }
    return 0;
}


/*First one is greater than second or,
First one is less than second or,
First and second one are equal.*/
