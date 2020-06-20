#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        double bs,HRA,DA,gs,p;
        cin>>bs;
        //if his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary.
        //If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
        // Gross Salary = Basic Salary + HRA + DA
        if(bs<1500)
        {
            HRA=(bs*10)/100;
            DA=(bs*90)/100;
            gs=bs+HRA+DA;
            cout<<fixed<<setprecision(2)<<gs<<endl;
        }
        else if(bs>=1500)
        {
            HRA=500;
            DA=(bs*98)/100;
            gs=bs+HRA+DA;
            cout<<fixed<<setprecision(2)<<gs<<endl;
        }

    }
    return 0;
}

