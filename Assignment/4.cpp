#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,serial,i,factorial=1,prime=0;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter 1. for Factorial"<<endl<<"2. to check prime or not"<<endl<<"3. to check odd r even"<<endl<<"4. to Exit"<<endl;
    while(cin>>serial)
    {
        if(serial==1)
        {
            for(i=1; i<=n; i++)
            {
                factorial*=i;
            }
            cout<<"Factorial("<<n<<")"<<" "<<"="<<" "<<factorial<<endl;
        }
        else if(serial==2)
        {
            for(i=2; i<=n/2; i++)
            {
                if(n%i==0)
                {
                    prime=1;
                    break;
                }
            }
            if(n==1)
            {
                cout<<"1 is not a prime number"<<endl;
            }
            else
            {
                if(prime==0)
                {
                    cout<<n<<" is a prime number"<<endl;
                }
                else
                {
                    cout<<n<<" is not a prime number"<<endl;
                }
            }
        }
        else if(serial==3)
        {
            if(n%2==0)
            {
                cout<<n<<" is a even number"<<endl;
            }
            else
            {
                cout<<n<<" is an odd number"<<endl;
            }
        }
        else if(serial==4)
        {
            cout<<"GOOD BYE!"<<endl;
            break;
        }
    }
    return 0;
}
