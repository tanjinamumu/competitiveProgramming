#include <iostream>
using namespace std;

int main()
{
    long long n,sum;
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        while(n!=0)
        {
            long long  a=n/100;
            n=n%100;
            //cout<<"15"<<" "<<n<<endl;
            long long b=n/50;
            n=n%50;
            //cout<<"18"<<" "<<n<<endl;
            long long c=n/10;
            n=n%10;
            //cout<<"21"<<" "<<n<<endl;
            long long d=n/5;
            n=n%5;
            //cout<<"24"<<" "<<n<<endl;
            long long e=n/2;
            n=n%2;
            //cout<<"27"<<" "<<n<<endl;
            long long f=n/1;
            n=n%1;
            //cout<<"30"<<" "<<n<<endl;
            sum = a+b+c+d+e+f ;
            //cout<<"32"<<" "<<sum<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}
