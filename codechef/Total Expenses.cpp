#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    double finall,quantity,price,percnt,total;
    cin>>t;
    while(t--)
    {
        cin>>quantity>>price;
        if(quantity>1000)
        {
            percnt=(quantity*10)/100;
            total=(quantity-percnt);
            finall=(total*price);
            cout<<fixed<<setprecision(6)<<finall<<endl;
        }
        else
        {
            finall=(quantity*price);
            cout<<fixed<<setprecision(6)<<finall<<endl;
        }
    }
    return 0;
}
