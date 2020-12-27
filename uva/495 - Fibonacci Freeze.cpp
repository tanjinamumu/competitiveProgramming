#include<bits/stdc++.h>
using namespace std;
unsigned long long int fibo[5004]= {0};
int main()
{
    int i=0,n=0;
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2; i<5004; i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<fibo[n]<<endl;
    }
    return 0;
}
