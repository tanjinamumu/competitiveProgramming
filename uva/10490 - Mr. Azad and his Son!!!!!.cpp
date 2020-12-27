#include<bits/stdc++.h>
using namespace std;

int prime(long n)
{
    int flag=0,i;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(!flag)
    {
        return true;
    }
    return false;
}

int main()
{
    long n,i,j,m,power;
    while((cin>>n)&&(n!=0))
    {
        m=pow(2,n)-1;
        power=m*pow(2,n-1);
        i=prime(m);
        if(i)
        {
            cout<<"Perfect: "<<power<<"!"<<endl;
        }
        else
        {
            j=prime(n);
            if(j)
            {
                cout<<"Given number is prime. But, NO perfect number is available."<<endl;
            }
            else
            {
                cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
            }
        }
    }
    return 0;
}
