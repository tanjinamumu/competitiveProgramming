#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,cnt=0;
    cin>>t;
    while(t--)
    {
        cnt++;
        cin>>n;
        if(n>=90 && n<=100)
        {
            cout<<"Student"<<" "<<cnt<<":"<<" "<<"A+"<<endl;
        }
        else if(n>=80 && n<=89)
        {
            cout<<"Student"<<" "<<cnt<<":"<<" "<<"A"<<endl;
        }
        else if(n>=70 && n<=79)
        {
            cout<<"Student"<<" "<<cnt<<":"<<" "<<"A-"<<endl;
        }
        else if(n>=60 && n<=69)
        {
            cout<<"Student"<<" "<<cnt<<":"<<" "<<"B+"<<endl;
        }
        else if(n>=50 && n<=59)
        {
            cout<<"Student"<<" "<<cnt<<":"<<" "<<"B-"<<endl;
        }
        else if(n>=40 && n<=49)
        {
            cout<<"Student"<<" "<<cnt<<":"<<" "<<"C"<<endl;
        }
        else if(n>=35 && n<=39)
        {
            cout<<"Student"<<" "<<cnt<<":"<<" "<<"D"<<endl;
        }
        else if(n>=0 && n<=34)
        {
            cout<<"Student"<<" "<<cnt<<":"<<" "<<"F"<<endl;
        }
    }
    return 0;
}
